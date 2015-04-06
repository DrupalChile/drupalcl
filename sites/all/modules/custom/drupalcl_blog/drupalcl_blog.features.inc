<?php
/**
 * @file
 * drupalcl_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcl_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}
