<?php
/**
 * @file
 * issue_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function issue_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function issue_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function issue_features_flag_default_flags() {
  $flags = array();
  // Exported flag: "Subscripción de Issues".
  $flags['subscripcion_issue'] = array(
    'entity_type' => 'node',
    'title' => 'Subscripción de Issues',
    'global' => 0,
    'types' => array(
      0 => 'issue',
    ),
    'flag_short' => 'Seguir',
    'flag_long' => 'Estar al tanto de esto.',
    'flag_message' => '',
    'unflag_short' => 'Dejar de seguir',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'issue_features',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function issue_features_node_info() {
  $items = array(
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => t('Issue de un proyecto.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'proyecto' => array(
      'name' => t('Proyecto'),
      'base' => 'node_content',
      'description' => t('Proyectos de módulos o temas de Drupal.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
