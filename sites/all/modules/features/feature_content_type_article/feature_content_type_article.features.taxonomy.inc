<?php
/**
 * @file
 * feature_content_type_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_content_type_article_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Теги',
      'machine_name' => 'tags',
      'description' => 'Используйте метки для группировки статей по темам.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
