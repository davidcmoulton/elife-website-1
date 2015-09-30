@api 
Feature: Collections
  In order to present compelling content
  As a feature editor
  I need to be able to be able to create collection pages

  Background:
    Given there are articles:
      """
          [
            {
              "title": "Article 1 for Collections test",
              "version": "1",
              "doi": "10.7554/eLife.05224.1",
              "volume": "4",
              "elocation-id": "e05224",
              "article-id": "05224",
              "article-version-id": "05224.1",
              "pub-date": "1979-08-17",
              "path": "content/4/e05224v1",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
                "author-keywords": [
                  "Algoriphagus"
                ]
              }
            },
            {
              "title": "Article 2 for Collections test",
              "version": "2",
              "doi": "10.7554/eLife.05224.2",
              "volume": "4",
              "elocation-id": "e05224",
              "article-id": "05224",
              "article-version-id": "05224.2",
              "pub-date": "1979-08-17",
              "path": "content/4/e05224v2",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
                "author-keywords": [
                  "Algoriphagus"
                ]
              }
            },
            {
              "title": "Article 3 for Collections test",
              "version": "1",
              "doi": "10.7554/eLife.05225.1",
              "volume": "4",
              "elocation-id": "e05225",
              "article-id": "05225",
              "article-version-id": "05225.1",
              "pub-date": "1979-08-17",
              "path": "content/4/e05225v1",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
                "author-keywords": [
                  "Algoriphagus",
                  "bacterial sulfonolipid"
                ]
              }
            },
            {
              "title": "Article 4 for Collections test",
              "version": "1",
              "doi": "10.7554/eLife.05226.1",
              "volume": "4",
              "elocation-id": "e05226",
              "article-id": "05226",
              "article-version-id": "05226.1",
              "pub-date": "1979-08-17",
              "path": "content/4/e05226v1",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
                "author-keywords": [
                  "bacterial sulfonolipid"
                ]
              }
            },
            {
              "title": "Article 5 for Collections test",
              "version": "1",
              "doi": "10.7554/eLife.05614",
              "volume": "3",
              "elocation-id": "e05614",
              "article-id": "05614",
              "article-version-id": "05614",
              "pub-date": "1979-08-17",
              "path": "content/3/e05614",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
              "author-keywords": [
                "early-career"
                        ]
                    }
            },
            {
              "title": "Article 6 for Collections test",
              "version": "1",
              "doi": "10.7554/eLife.04901",
              "volume": "3",
              "elocation-id": "e04901",
              "article-id": "04901",
              "article-version-id": "04901",
              "pub-date": "1979-08-17",
              "path": "content/3/e04901",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
              "author-keywords": [
                "early-career"
                  ]
                }
            },
            {
              "title": "Article 7 for Collections test",
              "version": "1",
              "doi": "10.7554/eLife.01633",
              "volume": "2",
              "elocation-id": "e01633",
              "article-id": "01633",
              "article-version-id": "01633",
              "pub-date": "1979-08-17",
              "path": "content/2/e01633",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
                "author-keywords": [
                  "early-career"
                ]
                }
            },
            {
              "title": "Article 8 for Collections test",
              "version": "1",
              "doi": "10.7554/eLife.00477",
              "volume": "2",
              "elocation-id": "e00477",
              "article-id": "00477",
              "article-version-id": "00477",
              "pub-date": "1979-08-17",
              "path": "content/2/e00477",
              "article-type": "research-article",
              "status": "VOR",
              "publish": "1",
              "keywords": {
              "author-keywords": [
                "bacterial sulfonolipid"
                ]
              }
            }
          ]
     """

  Scenario: Create collection page for Algoriphagus
    Given there are articles:
    """
        [
          {
            "title": "VOR 05224 v1",
            "version": "1",
            "doi": "10.7554/eLife.05224.1",
            "volume": "4",
            "elocation-id": "e05224",
            "article-id": "05224",
            "article-version-id": "05224.1",
            "pub-date": "1979-08-17",
            "path": "content/4/e05224v1",
            "article-type": "research-article",
            "status": "VOR",
            "publish": "1",
            "keywords": {
              "author-keywords": [
                "Algoriphagus"
              ]
            }
          },
          {
            "title": "VOR 05224 v2",
            "version": "2",
            "doi": "10.7554/eLife.05224.2",
            "volume": "4",
            "elocation-id": "e05224",
            "article-id": "05224",
            "article-version-id": "05224.2",
            "pub-date": "1979-08-17",
            "path": "content/4/e05224v2",
            "article-type": "research-article",
            "status": "VOR",
            "publish": "1",
            "keywords": {
              "author-keywords": [
                "Algoriphagus"
              ]
            }
          },
          {
            "title": "VOR 05225 v1",
            "version": "1",
            "doi": "10.7554/eLife.05225.1",
            "volume": "4",
            "elocation-id": "e05225",
            "article-id": "05225",
            "article-version-id": "05225.1",
            "pub-date": "1979-08-17",
            "path": "content/4/e05225v1",
            "article-type": "research-article",
            "status": "VOR",
            "publish": "1",
            "keywords": {
              "author-keywords": [
                "Algoriphagus",
                "bacterial sulfonolipid"
              ]
            }
          },
          {
            "title": "VOR 05226 v1",
            "version": "1",
            "doi": "10.7554/eLife.05226.1",
            "volume": "4",
            "elocation-id": "e05226",
            "article-id": "05226",
            "article-version-id": "05226.1",
            "pub-date": "1979-08-17",
            "path": "content/4/e05226v1",
            "article-type": "research-article",
            "status": "VOR",
            "publish": "1",
            "keywords": {
              "author-keywords": [
                "bacterial sulfonolipid"
              ]
            }
          }
        ]
      """
    When I am viewing an "elife_collection" content:
      | field_elife_c_keyword | Algoriphagus |
    Then I should not see text matching "VOR 05224 v2"
    And I should see text matching "VOR 05225 v1"
    And I should not see text matching "VOR 05224 v1"
    And I should not see text matching "VOR 05226 v1"

  Scenario: Collection of collections page
    When "elife_person_profile" content:
      | field_elife_p_first_name | field_elife_p_last_name | field_elife_p_type |
      | FirstName                | LastName                | Executive Staff    |
    When I am viewing an "elife_collection" content:
      | title                  | Algoriphagus                                                                |
      | field_elife_c_articles | 05224: Article 2 for Collections test, 05225: Article 3 for Collections test|
      | field_elife_c_curators | FirstName LastName (Executive Staff)                                        |
    And I should see text matching "Article 2 for Collections test"
    When I am viewing an "elife_collection" content:
      | title                  | early-career                           |
      | field_elife_c_articles | 01633: Article 7 for Collections test, 04901: Article 6 for Collections test|
      | field_elife_c_curators | FirstName LastName (Executive Staff)   |
    Then I should see text matching "Article 7 for Collections test"
    Given I am on "/collections"
    Then I should see an ".elife-collection__content" element
    Then I should see text matching "early-career"
    Then I should see text matching "Algoriphagus"
    Then I should see 2 "h2.collection-teaser__title" element

  Scenario: Collections with related content
    When "elife_person_profile" content:
      | field_elife_p_first_name | field_elife_p_last_name | field_elife_p_type |
      | FirstName                | LastName                | Executive Staff    |
      | Fname                    | LName                   | Executive Staff    |
    When I am viewing an "elife_collection" content:
      | title                  | Algoriphagus                                                                |
      | field_elife_c_articles | 05224: Article 2 for Collections test, 05225: Article 3 for Collections test|
      | field_elife_c_curators | FirstName LastName (Executive Staff)                                        |
      | field_elife_c_related  | 00477: Article 8 for Collections test  |
    And I should see text matching "Article 2 for Collections test"
    Then I should see "Related content" in the ".elife-collection__sidebar" element
    When I am viewing an "elife_collection" content:
      | title                  | early-career                           |
      | field_elife_c_articles | 01633: Article 7 for Collections test, 04901: Article 6 for Collections test|
      | field_elife_c_curators | FirstName LastName (Executive Staff)   |
      | field_elife_c_related  | 00477: Article 8 for Collections test  |
    Then I should see text matching "Article 7 for Collections test"
    Then I should see "Related content" in the ".elife-collection__sidebar" element
    Then I should see "Article 8 for Collections test" in the ".elife-collection__sidebar" element
    Given I am on "/collections"
    Then I should see an ".elife-collection__content" element
    Then I should see text matching "early-career"
    Then I should see text matching "Algoriphagus"
    Then I should see 2 "h2.collection-teaser__title" element
    Then I should not see "Article 8 for Collections test"

  Scenario: Collections by multiple curators
    When "elife_person_profile" content:
      | field_elife_p_first_name | field_elife_p_last_name | field_elife_p_type |
      | FirstName                | LastName                | Executive Staff    |
      | Fname                    | LName                   | Executive Staff    |
    When I am viewing an "elife_collection" content:
      | title                  | Algoriphagus                                                                |
      | field_elife_c_articles | 05224: Article 2 for Collections test, 05225: Article 3 for Collections test|
      | field_elife_c_curators | FirstName LastName (Executive Staff), FName LName (Executive Staff)         |
      | field_elife_c_related  | 00477: Article 8 for Collections test                                       |
    And I should see text matching "Article 2 for Collections test"
    Then I should see "Related content" in the ".elife-collection__sidebar" element
    When I am viewing an "elife_collection" content:
      | title                  | early-career                                                                |
      | field_elife_c_articles | 01633: Article 7 for Collections test, 04901: Article 6 for Collections test|
      | field_elife_c_curators | FirstName LastName (Executive Staff), FName LName (Executive Staff)         |
      | field_elife_c_related  | 00477: Article 8 for Collections test                                       |
    Then I should see text matching "Article 7 for Collections test"
    Then I should see "Related content" in the ".elife-collection__sidebar" element
    Then I should see "Article 8 for Collections test" in the ".elife-collection__sidebar" element
    Given I am on "/collections"
    Then I should see an ".elife-collection__content" element
    Then I should see text matching "early-career"
    Then I should see text matching "Algoriphagus"
    Then I should see 2 "h2.collection-teaser__title" element

