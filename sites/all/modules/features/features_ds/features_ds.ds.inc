<?php
/**
 * @file
 * features_ds.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_ds_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'body',
        2 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'body' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|article|default'] = $ds_layout;

  return $export;
}
