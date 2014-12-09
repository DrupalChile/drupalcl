<?php
/**
 * @file
 * drupal_chile_common.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupal_chile_common_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->layout = 'geary';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba51ba25-b2a0-4193-9eb4-46df61e3358a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3508a791-bba9-410f-9696-0c18ba3c207c';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'common-noticia_destacada';
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
    $pane->uuid = '3508a791-bba9-410f-9696-0c18ba3c207c';
    $display->content['new-3508a791-bba9-410f-9696-0c18ba3c207c'] = $pane;
    $display->panels['column2'][0] = 'new-3508a791-bba9-410f-9696-0c18ba3c207c';
    $pane = new stdClass();
    $pane->pid = 'new-6294e6b8-3923-4a0b-b0c1-a4f0a1b1c0fb';
    $pane->panel = 'column3';
    $pane->type = 'views_panes';
    $pane->subtype = 'common-caso_destacado';
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
    $pane->uuid = '6294e6b8-3923-4a0b-b0c1-a4f0a1b1c0fb';
    $display->content['new-6294e6b8-3923-4a0b-b0c1-a4f0a1b1c0fb'] = $pane;
    $display->panels['column3'][0] = 'new-6294e6b8-3923-4a0b-b0c1-a4f0a1b1c0fb';
    $pane = new stdClass();
    $pane->pid = 'new-eb91eb33-3a4b-439b-a11b-f63ceae5f9b5';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'common-banner_home';
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
    $pane->uuid = 'eb91eb33-3a4b-439b-a11b-f63ceae5f9b5';
    $display->content['new-eb91eb33-3a4b-439b-a11b-f63ceae5f9b5'] = $pane;
    $display->panels['header'][0] = 'new-eb91eb33-3a4b-439b-a11b-f63ceae5f9b5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
