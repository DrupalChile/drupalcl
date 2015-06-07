<?php
/**
 * @file
 * drupal_chile_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_chile_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupal_chile_common_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupal_chile_common_image_default_styles() {
  $styles = array();

  // Exported image style: 100x100.
  $styles['100x100'] = array(
    'label' => '100x100',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_big.
  $styles['image_big'] = array(
    'label' => 'Image big 1200x675',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 675,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_content.
  $styles['image_content'] = array(
    'label' => 'Image content',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: list_thumbnail.
  $styles['list_thumbnail'] = array(
    'label' => 'List thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_big.
  $styles['user_big'] = array(
    'label' => 'User big',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function drupal_chile_common_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
