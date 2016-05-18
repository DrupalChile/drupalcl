<?php
/**
 * @file
 * eventos.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function eventos_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_selby_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
      'contentfooter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '93f35acb-ef09-498e-8ac1-431a78b7200e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a7d89dd2-fa35-4fcc-b106-dda211b4ed42';
    $pane->panel = 'contentheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'image_content',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7d89dd2-fa35-4fcc-b106-dda211b4ed42';
    $display->content['new-a7d89dd2-fa35-4fcc-b106-dda211b4ed42'] = $pane;
    $display->panels['contentheader'][0] = 'new-a7d89dd2-fa35-4fcc-b106-dda211b4ed42';
    $pane = new stdClass();
    $pane->pid = 'new-f23f4afe-776c-40c4-998e-e620b6ee348b';
    $pane->panel = 'contentheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f23f4afe-776c-40c4-998e-e620b6ee348b';
    $display->content['new-f23f4afe-776c-40c4-998e-e620b6ee348b'] = $pane;
    $display->panels['contentheader'][1] = 'new-f23f4afe-776c-40c4-998e-e620b6ee348b';
    $pane = new stdClass();
    $pane->pid = 'new-aaf8704f-9abd-4b10-b651-7ea3f8181cd5';
    $pane->panel = 'contentheader';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_photos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'photoset_flickrcomslideshow_simple',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Galería de fotos',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'aaf8704f-9abd-4b10-b651-7ea3f8181cd5';
    $display->content['new-aaf8704f-9abd-4b10-b651-7ea3f8181cd5'] = $pane;
    $display->panels['contentheader'][2] = 'new-aaf8704f-9abd-4b10-b651-7ea3f8181cd5';
    $pane = new stdClass();
    $pane->pid = 'new-25e6a5e7-a385-4bf9-b95e-b90a5704e486';
    $pane->panel = 'contentheader';
    $pane->type = 'block';
    $pane->subtype = 'disqus-disqus_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Comentarios',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '25e6a5e7-a385-4bf9-b95e-b90a5704e486';
    $display->content['new-25e6a5e7-a385-4bf9-b95e-b90a5704e486'] = $pane;
    $display->panels['contentheader'][3] = 'new-25e6a5e7-a385-4bf9-b95e-b90a5704e486';
    $pane = new stdClass();
    $pane->pid = 'new-e8c8be6e-d3f7-46c7-8dad-e5398755ac10';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'date_long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Fecha',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e8c8be6e-d3f7-46c7-8dad-e5398755ac10';
    $display->content['new-e8c8be6e-d3f7-46c7-8dad-e5398755ac10'] = $pane;
    $display->panels['sidebar'][0] = 'new-e8c8be6e-d3f7-46c7-8dad-e5398755ac10';
    $pane = new stdClass();
    $pane->pid = 'new-db0cba31-b961-4b35-81c7-3e6037d3c8f6';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tipo de evento',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db0cba31-b961-4b35-81c7-3e6037d3c8f6';
    $display->content['new-db0cba31-b961-4b35-81c7-3e6037d3c8f6'] = $pane;
    $display->panels['sidebar'][1] = 'new-db0cba31-b961-4b35-81c7-3e6037d3c8f6';
    $pane = new stdClass();
    $pane->pid = 'new-d39872bf-0475-4ea9-8e77-2a4a7b8a3003';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'zoom_level' => '14',
        'map_size' => '400x400',
        'map_style' => 'roadmap',
        'advanced_settings_index' => '0',
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Lugar',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd39872bf-0475-4ea9-8e77-2a4a7b8a3003';
    $display->content['new-d39872bf-0475-4ea9-8e77-2a4a7b8a3003'] = $pane;
    $display->panels['sidebar'][2] = 'new-d39872bf-0475-4ea9-8e77-2a4a7b8a3003';
    $pane = new stdClass();
    $pane->pid = 'new-0e602a9a-ee39-421c-ab66-050553723431';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'addressfield_staticmap',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'zoom_level' => '14',
        'map_size' => '400x400',
        'map_style' => 'roadmap',
        'advanced_settings_index' => '0',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0e602a9a-ee39-421c-ab66-050553723431';
    $display->content['new-0e602a9a-ee39-421c-ab66-050553723431'] = $pane;
    $display->panels['sidebar'][3] = 'new-0e602a9a-ee39-421c-ab66-050553723431';
    $pane = new stdClass();
    $pane->pid = 'new-06813f99-9de2-46b4-9ebe-28d75fc8e497';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Archivos',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '06813f99-9de2-46b4-9ebe-28d75fc8e497';
    $display->content['new-06813f99-9de2-46b4-9ebe-28d75fc8e497'] = $pane;
    $display->panels['sidebar'][4] = 'new-06813f99-9de2-46b4-9ebe-28d75fc8e497';
    $pane = new stdClass();
    $pane->pid = 'new-9c36a94c-72f3-4e5d-8ee8-ca63d8ef4d22';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_table',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9c36a94c-72f3-4e5d-8ee8-ca63d8ef4d22';
    $display->content['new-9c36a94c-72f3-4e5d-8ee8-ca63d8ef4d22'] = $pane;
    $display->panels['sidebar'][5] = 'new-9c36a94c-72f3-4e5d-8ee8-ca63d8ef4d22';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e8c8be6e-d3f7-46c7-8dad-e5398755ac10';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function eventos_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Eventos';
  $page->admin_description = '';
  $page->path = 'eventos';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Eventos',
    'name' => 'main-menu',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c6793f5d-9a25-474f-b9ad-c166d4dad72b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-da8112bf-6e60-4537-99cb-5e171447a7c5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'list_of_contents-events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da8112bf-6e60-4537-99cb-5e171447a7c5';
    $display->content['new-da8112bf-6e60-4537-99cb-5e171447a7c5'] = $pane;
    $display->panels['middle'][0] = 'new-da8112bf-6e60-4537-99cb-5e171447a7c5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da8112bf-6e60-4537-99cb-5e171447a7c5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
