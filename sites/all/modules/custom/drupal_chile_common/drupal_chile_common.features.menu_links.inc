<?php
/**
 * @file
 * drupal_chile_common.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupal_chile_common_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_acerca-de:node/293
  $menu_links['main-menu_acerca-de:node/293'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/293',
    'router_path' => 'node/%',
    'link_title' => 'Acerca de',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_acerca-de:node/293',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_la-comunidad:node/293',
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_la-comunidad:node/293',
  );
  // Exported menu link: main-menu_contacto:contact
  $menu_links['main-menu_contacto:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contacto:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_eventos:eventos
  $menu_links['main-menu_eventos:eventos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eventos',
    'router_path' => 'eventos',
    'link_title' => 'Eventos',
    'options' => array(
      'identifier' => 'main-menu_eventos:eventos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_la-comunidad:node/293',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_la-comunidad:node/293
  $menu_links['main-menu_la-comunidad:node/293'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/293',
    'router_path' => 'node/%',
    'link_title' => 'La Comunidad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_la-comunidad:node/293',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_miembros:miembros
  $menu_links['main-menu_miembros:miembros'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'miembros',
    'router_path' => 'miembros',
    'link_title' => 'Miembros',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_miembros:miembros',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_la-comunidad:node/293',
  );
  // Exported menu link: main-menu_noticias:noticias
  $menu_links['main-menu_noticias:noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'identifier' => 'main-menu_noticias:noticias',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_la-comunidad:node/293',
  );
  // Exported menu link: main-menu_proyectos:proyectos
  $menu_links['main-menu_proyectos:proyectos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'proyectos',
    'router_path' => 'proyectos',
    'link_title' => 'Proyectos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_proyectos:proyectos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_usan-drupal:usan-drupal
  $menu_links['main-menu_usan-drupal:usan-drupal'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'usan-drupal',
    'router_path' => 'usan-drupal',
    'link_title' => 'Usan Drupal',
    'options' => array(
      'identifier' => 'main-menu_usan-drupal:usan-drupal',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Acerca de');
  t('Blog');
  t('Contacto');
  t('Eventos');
  t('Home');
  t('La Comunidad');
  t('Miembros');
  t('Noticias');
  t('Proyectos');
  t('Usan Drupal');


  return $menu_links;
}
