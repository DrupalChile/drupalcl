<?php


/**
 * Implements hook_views_data_alter().
 */
function drupalcl_views_data_alter(&$data) {
  $data['node']['link_create_issues'] = array(
    'title' => 'Crear Issue',
    'help' => 'Crea un link para crear un nodo issue.',
    'area' => array(
      'handler' => 'drupalcl_views_handler_area_link_create_issues',
    ),
  );
}



class drupalcl_views_handler_area_link_create_issues extends views_handler_area {
  function render($empty = FALSE) {
    $id = arg(1);

    if ($id && is_numeric($id) && ($node = node_load($id)) && $node->type == 'proyecto') {
      $options = array(
        'query' => array('field_issue_proyecto' => $id),
      );

      return theme('item_list', array(
        'items' => array(
          l('Crear Issue', 'node/add/issue', $options),
        ),
        'attributes' => array(
          'class' => array('action-links'),
        ),
      ));
    }
  }
}
