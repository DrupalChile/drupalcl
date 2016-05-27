<?php
/**
 * @file
 * issue_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function issue_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Issue',
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
              'issue' => 'issue',
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
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7071f655-f456-403a-8ad3-7f8fac1cae2a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-040b2d2d-71e9-418c-8949-193e9a7280dc';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '040b2d2d-71e9-418c-8949-193e9a7280dc';
    $display->content['new-040b2d2d-71e9-418c-8949-193e9a7280dc'] = $pane;
    $display->panels['contentmain'][0] = 'new-040b2d2d-71e9-418c-8949-193e9a7280dc';
    $pane = new stdClass();
    $pane->pid = 'new-4aa4b26d-f833-40a2-9958-f0e2bdeef27a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_responsable';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
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
    $pane->uuid = '4aa4b26d-f833-40a2-9958-f0e2bdeef27a';
    $display->content['new-4aa4b26d-f833-40a2-9958-f0e2bdeef27a'] = $pane;
    $display->panels['sidebar'][0] = 'new-4aa4b26d-f833-40a2-9958-f0e2bdeef27a';
    $pane = new stdClass();
    $pane->pid = 'new-8db494c5-a44e-4c91-8e74-767f486ed929';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_estado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_plain',
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
    $pane->uuid = '8db494c5-a44e-4c91-8e74-767f486ed929';
    $display->content['new-8db494c5-a44e-4c91-8e74-767f486ed929'] = $pane;
    $display->panels['sidebar'][1] = 'new-8db494c5-a44e-4c91-8e74-767f486ed929';
    $pane = new stdClass();
    $pane->pid = 'new-ddfadd24-4de5-4568-9dfb-bc1b858d8b16';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_categoria';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ddfadd24-4de5-4568-9dfb-bc1b858d8b16';
    $display->content['new-ddfadd24-4de5-4568-9dfb-bc1b858d8b16'] = $pane;
    $display->panels['sidebar'][2] = 'new-ddfadd24-4de5-4568-9dfb-bc1b858d8b16';
    $pane = new stdClass();
    $pane->pid = 'new-6aa7ec45-3c09-480f-b1e3-2c0a0bc61881';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issue_archivos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6aa7ec45-3c09-480f-b1e3-2c0a0bc61881';
    $display->content['new-6aa7ec45-3c09-480f-b1e3-2c0a0bc61881'] = $pane;
    $display->panels['sidebar'][3] = 'new-6aa7ec45-3c09-480f-b1e3-2c0a0bc61881';
    $pane = new stdClass();
    $pane->pid = 'new-ea97706a-e35d-40cf-98b4-286df70f25c6';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_issues_tipo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ea97706a-e35d-40cf-98b4-286df70f25c6';
    $display->content['new-ea97706a-e35d-40cf-98b4-286df70f25c6'] = $pane;
    $display->panels['sidebar'][4] = 'new-ea97706a-e35d-40cf-98b4-286df70f25c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-040b2d2d-71e9-418c-8949-193e9a7280dc';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
