<?php
/**
 * @file
 * drupalcl_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function drupalcl_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_panel_context';
  $handler->task = 'blog';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blog';
  $display->uuid = 'a5edb0c8-3444-47e8-9d64-fc2cc94e1388';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-831175e2-11f0-4c66-8237-963a3560ab7c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'list_of_contents-panel_pane_2';
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
    $pane->uuid = '831175e2-11f0-4c66-8237-963a3560ab7c';
    $display->content['new-831175e2-11f0-4c66-8237-963a3560ab7c'] = $pane;
    $display->panels['contentmain'][0] = 'new-831175e2-11f0-4c66-8237-963a3560ab7c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Blog',
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
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
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9014bf17-b9d7-42af-9909-35348850264c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-319dd9a6-0943-4542-bbc0-68451615e72b';
    $pane->panel = 'contentmain';
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
    $pane->uuid = '319dd9a6-0943-4542-bbc0-68451615e72b';
    $display->content['new-319dd9a6-0943-4542-bbc0-68451615e72b'] = $pane;
    $display->panels['contentmain'][0] = 'new-319dd9a6-0943-4542-bbc0-68451615e72b';
    $pane = new stdClass();
    $pane->pid = 'new-85c97ec0-8ed5-4254-840b-8f50e732e158';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'sharethis-sharethis_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '85c97ec0-8ed5-4254-840b-8f50e732e158';
    $display->content['new-85c97ec0-8ed5-4254-840b-8f50e732e158'] = $pane;
    $display->panels['contentmain'][1] = 'new-85c97ec0-8ed5-4254-840b-8f50e732e158';
    $pane = new stdClass();
    $pane->pid = 'new-246dc8d9-58c8-4a0b-a096-94c57cf3d893';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '246dc8d9-58c8-4a0b-a096-94c57cf3d893';
    $display->content['new-246dc8d9-58c8-4a0b-a096-94c57cf3d893'] = $pane;
    $display->panels['contentmain'][2] = 'new-246dc8d9-58c8-4a0b-a096-94c57cf3d893';
    $pane = new stdClass();
    $pane->pid = 'new-cff60bea-049d-4353-ad7d-893706981519';
    $pane->panel = 'contentmain';
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
    $pane->uuid = 'cff60bea-049d-4353-ad7d-893706981519';
    $display->content['new-cff60bea-049d-4353-ad7d-893706981519'] = $pane;
    $display->panels['contentmain'][3] = 'new-cff60bea-049d-4353-ad7d-893706981519';
    $pane = new stdClass();
    $pane->pid = 'new-3ed39fc8-813f-4f91-9fbb-321b0b598f56';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'common-panel_pane_1';
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
    $pane->uuid = '3ed39fc8-813f-4f91-9fbb-321b0b598f56';
    $display->content['new-3ed39fc8-813f-4f91-9fbb-321b0b598f56'] = $pane;
    $display->panels['sidebar'][0] = 'new-3ed39fc8-813f-4f91-9fbb-321b0b598f56';
    $pane = new stdClass();
    $pane->pid = 'new-6a816a03-a381-458d-8393-b8a19f33e4ba';
    $pane->panel = 'sidebar';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'date_short',
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
    $pane->uuid = '6a816a03-a381-458d-8393-b8a19f33e4ba';
    $display->content['new-6a816a03-a381-458d-8393-b8a19f33e4ba'] = $pane;
    $display->panels['sidebar'][1] = 'new-6a816a03-a381-458d-8393-b8a19f33e4ba';
    $pane = new stdClass();
    $pane->pid = 'new-4994f8cb-dff6-49df-b7c5-c6f6e10ff1a9';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '4994f8cb-dff6-49df-b7c5-c6f6e10ff1a9';
    $display->content['new-4994f8cb-dff6-49df-b7c5-c6f6e10ff1a9'] = $pane;
    $display->panels['sidebar'][2] = 'new-4994f8cb-dff6-49df-b7c5-c6f6e10ff1a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
