<?php
/**
 * @file
 * drupalcl_demo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalcl_demo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'demo';
  $page->task = 'page';
  $page->admin_title = 'Demo';
  $page->admin_description = '';
  $page->path = 'demo';
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
  $handler->name = 'page_demo_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'demo';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Demo',
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
  $display->title = 'Demo';
  $display->uuid = '63e84596-c3b7-4b22-8971-5fce2d45fd6d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3449cc86-898d-48f4-ad82-916fbc9a1310';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Demo',
      'title' => 'Demo',
      'body' => '<p>Demo</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3449cc86-898d-48f4-ad82-916fbc9a1310';
    $display->content['new-3449cc86-898d-48f4-ad82-916fbc9a1310'] = $pane;
    $display->panels['middle'][0] = 'new-3449cc86-898d-48f4-ad82-916fbc9a1310';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3449cc86-898d-48f4-ad82-916fbc9a1310';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['demo'] = $page;

  return $pages;

}
