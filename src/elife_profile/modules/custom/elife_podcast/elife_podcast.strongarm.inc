<?php
/**
 * @file
 * elife_podcast.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function elife_podcast_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'display_cache_node_elife_podcast_chapter_elife_teaser_compact';
  $strongarm->value = array(
    'default' => array(
      'use' => '1',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
  );
  $export['display_cache_node_elife_podcast_chapter_elife_teaser_compact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'display_cache_node_elife_podcast_chapter_teaser';
  $strongarm->value = array(
    'default' => array(
      'use' => '1',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
    'field_elife_pc_title' => array(
      'override' => '2',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
    'field_elife_pc_text' => array(
      'override' => '2',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
  );
  $export['display_cache_node_elife_podcast_chapter_teaser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'display_cache_node_elife_podcast_elife_teaser_compact';
  $strongarm->value = array(
    'default' => array(
      'use' => '1',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
  );
  $export['display_cache_node_elife_podcast_elife_teaser_compact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'display_cache_node_elife_podcast_teaser';
  $strongarm->value = array(
    'default' => array(
      'use' => '1',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
    'field_elife_p_image' => array(
      'override' => '2',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
    'field_elife_p_text' => array(
      'override' => '2',
      'page_granularity' => '0',
      'user_granularity' => '1',
      'granularity' => '1',
    ),
  );
  $export['display_cache_node_elife_podcast_teaser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__elife_podcast';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'elife_teaser_compact' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'elife_teaser_alternative' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '50',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '49',
        ),
        'redirect' => array(
          'weight' => '48',
        ),
        'rabbit_hole' => array(
          'weight' => '47',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'elife_teaser_compact' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__elife_podcast'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__elife_podcast_chapter';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'elife_teaser_compact' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'elife_teaser_alternative' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '50',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '49',
        ),
        'rabbit_hole' => array(
          'weight' => '47',
        ),
        'redirect' => array(
          'weight' => '48',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'elife_teaser_compact' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_elife_podcast';
  $strongarm->value = array();
  $export['menu_options_elife_podcast'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_elife_podcast_chapter';
  $strongarm->value = array();
  $export['menu_options_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_elife_podcast';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_elife_podcast'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_elife_podcast_chapter';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_elife_podcast';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_elife_podcast'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_elife_podcast_chapter';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_elife_podcast';
  $strongarm->value = '1';
  $export['node_preview_elife_podcast'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_elife_podcast_chapter';
  $strongarm->value = '1';
  $export['node_preview_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_elife_podcast';
  $strongarm->value = 0;
  $export['node_submitted_elife_podcast'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_elife_podcast_chapter';
  $strongarm->value = 0;
  $export['node_submitted_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_elife_podcast_chapter_pattern';
  $strongarm->value = '';
  $export['pathauto_node_elife_podcast_chapter_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_elife_podcast_pattern';
  $strongarm->value = 'podcast/episode[node:field-elife-p-episode-number]';
  $export['pathauto_node_elife_podcast_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_elife_podcast_chapter';
  $strongarm->value = 'rh_node';
  $export['rh_module_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_elife_podcast_chapter';
  $strongarm->value = '2';
  $export['rh_node_action_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_elife_podcast_chapter';
  $strongarm->value = 0;
  $export['rh_node_override_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_elife_podcast_chapter';
  $strongarm->value = '';
  $export['rh_node_redirect_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_elife_podcast_chapter';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_elife_podcast_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_elife_podcast';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_elife_podcast'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_elife_podcast_chapter';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_elife_podcast_chapter'] = $strongarm;

  return $export;
}
