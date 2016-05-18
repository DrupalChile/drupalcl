<?php
/**
 * @file
 * proyectos.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function proyectos_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'listado_de_proyectos';
  $path_breadcrumb->name = 'Listado de proyectos';
  $path_breadcrumb->path = 'proyectos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Proyectos',
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
  $export['listado_de_proyectos'] = $path_breadcrumb;

  return $export;
}
