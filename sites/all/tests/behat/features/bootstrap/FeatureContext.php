<?php

use Behat\Behat\Tester\Exception\PendingException;
use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Behat\Context\SnippetAcceptingContext;
use Drupal\elife_article\ElifeArticle;
use Behat\Behat\Hook\Scope\BeforeStepScope;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

  /**
   * Keep track of apaths so they can be cleaned up.
   *
   * @var array
   */
  protected $apaths = array();

  /**
   * Initializes context.
   */
  public function __construct() {
  }

  /**
   * Store article ids used to POST new content so we can cleanup later.
   *
   * @BeforeStep
   *
   * @param BeforeStepScope $scope
   */
  public function beforeStepStoreApaths(BeforeStepScope $scope) {
    $text = $scope->getStep()->getText();
    if (preg_match('/send a POST request to "[^\"]+" with body\:$/i', $text)) {
      $strings = $scope->getStep()->getArguments();
      /* @var $string \Behat\Gherkin\Node\PyStringNode */
      foreach ($strings as $string) {
        $json = json_decode($string->getRaw());
        if (!empty($json->apath)) {
          $this->apaths[] = $json->apath;
        }
      }
    }
    elseif (preg_match('/send a PUT request to "[^\"]+\/(?<apath>[^\.]+)\.json" with body\:$/i', $text, $matches)) {
      $this->apaths[] = $matches['apath'];
    }
  }

  /**
   * Delete articles for the store article ids.
   *
   * @AfterScenario
   */
  public function cleanApaths() {
    if (!empty($this->apaths)) {
      module_load_include('inc', 'elife_services', 'resources/article');
      foreach ($this->apaths as $article_id) {
        _elife_services_article_delete($article_id, FALSE);
      }
    }
  }
}
