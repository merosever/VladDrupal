<?php
/**
 * @file
 * feature_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function feature_paragraphs_paragraphs_info() {
  $items = array(
    'test' => array(
      'name' => 'test',
      'bundle' => 'test',
      'locked' => '1',
    ),
  );
  return $items;
}
