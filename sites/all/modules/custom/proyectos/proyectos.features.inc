<?php
/**
 * @file
 * proyectos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proyectos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}
