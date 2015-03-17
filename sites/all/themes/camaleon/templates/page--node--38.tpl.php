<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['branding']: Items for the branding region.
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region.
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see omega_preprocess_page()
 */
?>
<div class="l-page">
  <header class="l-header" role="banner">
    <div class="l-branding">
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <?php if ($site_name): ?>
          <h1 class="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <h2 class="site-slogan"><?php print $site_slogan; ?></h2>
        <?php endif; ?>
      <?php endif; ?>

      <?php print render($page['branding']); ?>
    </div>

    <?php print render($page['header']); ?>
    <?php print render($page['navigation']); ?>
  </header>

  <div class="l-main">
    <div class="l-content" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <article<?php print $attributes; ?>>
        <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>
          <header>
            <?php print render($title_prefix); ?>
            <?php if (!$page): ?>
              <!--<h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a></h2>-->
            <?php endif; ?>
            <?php print render($title_suffix); ?>
          </header>
        <?php endif; ?>

        <div class="head">
          <img src="sites/all/themes/camaleon/images/logo-picec-512.png" alt="">
          <h2>Instala y personaliza tu propia tienda en línea gratis</h2>
        </div>
        <a href="demo" title="PICEC" class="button">Demo</a>
        <a href="https://www.drupal.org/project/picec" title="PICEC" class="button">Descargar</a>
        <a href="documentation/18" title="Documentos" class="button">Documentos</a>
        <a href="node/3/issues" title="Issues" class="button">Issues</a>
        <div class="features">
          <h1>Con PICEC potencia tu negocio</h1>
          <div class="feature">
            <h2>¿Qué es PICEC?</h2>
            <p>PICEC es el acrónimo de "Perfil de Instalación de Comercio Electrónico para Chile". Se trata de una distribución de                Drupal que permite crear en pocos pasos una tienda virtual que opere dentro del territorio nacional.</p>
          </div>
          <div class="feature">
            <h2>¿Qué es un perfil de instalación?</h2>
            <p>Un perfil de instalación es una distribución de Drupal que contiene módulos del core, módulos contribuídos, módulos personalizados, themes así como configuración predefinida que juntos proveen las funcionalidades para un tipo específico de sitios.</p>
          </div>
          <div class="feature">
            <h2>¿Cuáles son las ventajas de usar PICEC?</h2>
            <p>PICEC es una herramienta de código abierto desarrollada por miembros de la comunidad chilena de Drupal que han tenido experiencia implementando tiendas virtuales. Por lo tanto, al usar PICEC estás aprovechando esta experiencia puesta a tu disposición./p>
          </div>
        </div>
        <!--<div class="more-features">
          <h1>Todas las funciones de comercio electrónico.</h1>
          <h2>PICEC se encarga de todos los detalles de las ventas online.</h2>
        </div>-->

        <div<?php print $content_attributes; ?>>
          <?php
            // We hide the comments and links now so that we can render them later.
            hide($content['comments']);
            hide($content['links']);
            print render($content);
          ?>
        </div>

        <?php print render($content['links']); ?>
        <?php print render($content['comments']); ?>
      </article>
      <?php print $feed_icons; ?>
    </div>

    <?php print render($page['sidebar_first']); ?>
    <?php print render($page['sidebar_second']); ?>
  </div>

  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>
