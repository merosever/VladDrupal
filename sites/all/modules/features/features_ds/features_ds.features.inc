<?php
/**
 * @file
 * features_ds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_ds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
