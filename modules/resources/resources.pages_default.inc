<?php
/**
 * @file
 * resources.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function resources_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__book';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Book',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'book',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'book' => 'book',
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
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9af6f4a7-108d-49e2-aafc-478cef4d2a04';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b79125d5-0380-4933-abf9-823d0ed638ef';
    $pane->panel = 'contentmain';
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
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b79125d5-0380-4933-abf9-823d0ed638ef';
    $display->content['new-b79125d5-0380-4933-abf9-823d0ed638ef'] = $pane;
    $display->panels['contentmain'][0] = 'new-b79125d5-0380-4933-abf9-823d0ed638ef';
    $pane = new stdClass();
    $pane->pid = 'new-8083690f-01c4-4990-b719-f0c00f857430';
    $pane->panel = 'contentmain';
    $pane->type = 'node_book_nav';
    $pane->subtype = 'node_book_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8083690f-01c4-4990-b719-f0c00f857430';
    $display->content['new-8083690f-01c4-4990-b719-f0c00f857430'] = $pane;
    $display->panels['contentmain'][1] = 'new-8083690f-01c4-4990-b719-f0c00f857430';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b79125d5-0380-4933-abf9-823d0ed638ef';
  $handler->conf['display'] = $display;
  $export['node_view__book'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function resources_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'material_de_apoyo';
  $page->task = 'page';
  $page->admin_title = 'Material de apoyo';
  $page->admin_description = '';
  $page->path = 'material-de-apoyo';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_material_de_apoyo__panel_context_373ec6fa-1b3b-41af-8f60-035502056a0c';
  $handler->task = 'page';
  $handler->subtask = 'material_de_apoyo';
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
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Material de apoyo';
  $display->uuid = 'b7cdd43d-226c-40be-84c2-d26da77ffad6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01276996-ffd1-4769-b541-e927be77bc20';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'list_of_contents-panel_resources';
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
    $pane->uuid = '01276996-ffd1-4769-b541-e927be77bc20';
    $display->content['new-01276996-ffd1-4769-b541-e927be77bc20'] = $pane;
    $display->panels['contentmain'][0] = 'new-01276996-ffd1-4769-b541-e927be77bc20';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-01276996-ffd1-4769-b541-e927be77bc20';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['material_de_apoyo'] = $page;

  return $pages;

}
