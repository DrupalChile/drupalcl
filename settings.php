<?php
/**
 * Include a local settings file if it exists.
 */
$local_settings = dirname(__FILE__) . '/settings.local.php';
if (file_exists($local_settings)) {
  include $local_settings;
}

$settings['hash_salt'] = 'OHRRfs_ZfmlJh0BTNnrjE4v3hdbPuOCpAZHEa2eE_KSNRYDhjY3qTJijmuwn4UMRuFlRx5ZQbg';
$settings['install_profile'] = 'standard';
$config_directories['sync'] = 'sites/default/files/config_55Esvzfobw1FUi0szsFQv-ou23-krU29OKrigTaMJ8dKodbbETgn8mVAJM0Gawjm7pHUgNz1Rw/sync';
