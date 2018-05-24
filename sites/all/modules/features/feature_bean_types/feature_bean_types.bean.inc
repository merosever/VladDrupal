<?php
/**
 * @file
 * feature_bean_types.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function feature_bean_types_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'test_bean';
  $bean_type->label = 'test bean';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['test_bean'] = $bean_type;

  return $export;
}
