<?php
/**
 * @file
 * clientside_validation_test_field_validation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clientside_validation_test_field_validation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}
