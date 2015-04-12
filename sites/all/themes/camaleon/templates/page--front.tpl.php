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
<div class="l-page" >
  <header class="l-header wow fadeInDownBig" role="banner">
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

  <div class="wrapper community">
    <div class="container wow bounceInLeft">
      <h1>La comunidad de Drupal en Chile</h1>
      <p class="intro">Unete y participa en nuestros eventos.</p>
      <div class="eventime_button"><a href="la-comunidad" class="btn-white" role="button">Más información</a></div>
      <img src="sites/all/themes/camaleon/images/logo-drupalcl-512.png" class="" alt="Logo PICEC">
    </div>
  </div>

  <div class="wrapper section">
    <div class="container wow bounceInUp">      
      <ul>
        <li><p><i class="fa fa-4x fa-calendar"></i></p><h3>Eventos</h3><p>Mensualmente nos juntamos a intercambiar experiencias relacionadas con Drupal.</p><p><div class="eventime_button"><a href="eventos" class="btn btn-featured" role="button">Ver más</a></div></p></li>
        <li><p><i class="fa fa-4x fa-folder-open"></i></p><h3>Material de apoyo</h3><p>Descarga y visualiza en línea material de apoyo para tus proyectos.</p><p><div class="eventime_button"><a href="material-de-apoyo" title="Ver más" class="btn btn-featured">Ver más</a></div></p></li>
        <li><p><i class="fa fa-4x fa-users"></i></p><h3>Proyectos</h3><p>Conoce, participa y colabora en los proyectos de la comunidad</p><p><div class="eventime_button"><a href="proyectos" title="Ver más" class="btn btn-featured">Ver más</a></div></p></li>
      </ul>

    </div>
  </div>

  <div class="wrapper featured">
    <div class="container">
      <h1>Comercio electrónico para Chile</h1>
      <p class="intro">Perfil de Instalación de Comercio Electrónico Chileno</p>
      <div class="eventime_button"><a href="picec" class="" role="button">Más información</a></div>
      <img src="sites/all/themes/camaleon/images/logo-picec-512.png" class="wow bounceInDown" alt="Logo PICEC">
    </div>
  </div>

  <div class="wrapper portafolio">
    <div class="container">
      <h2>Sitios creados con Drupal</h2>
      
      <?php

      $view = views_get_view('common');
      $view->execute_display('caso_destacado');
      print $view->render();

      ?>
    </div>
  </div>

  <!--<div class="l-main">
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
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php print render($page['sidebar_first']); ?>
    <?php print render($page['sidebar_second']); ?>
  </div>-->

  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>
