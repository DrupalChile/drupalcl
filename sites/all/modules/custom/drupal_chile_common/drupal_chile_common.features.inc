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

  // Exported image style: image_content.
  $styles['image_content'] = array(
    'name' => 'image_content',
    'label' => 'Image content',
    'effects' => array(
      2 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'list_thumbnail',
    'label' => 'List thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
