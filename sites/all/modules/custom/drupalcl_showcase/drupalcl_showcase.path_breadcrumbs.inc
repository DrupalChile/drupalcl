<?php
/**
 * @file
 * drupalcl_showcase.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function drupalcl_showcase_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'showcase_list';
  $path_breadcrumb->name = 'Showcase list';
  $path_breadcrumb->path = 'portafolio';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Portafolio',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['showcase_list'] = $path_breadcrumb;

  return $export;
}
