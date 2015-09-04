<?php

use Monolog\Handler\ErrorLogHandler;

// Set up Composer.
require_once __DIR__ . '/../vendor/autoload.php';
$conf['elife_composer_vendor_path'] = __DIR__ . '/../vendor';

// Define the environment.
$conf['elife_production'] = FALSE;

// Don't allow modules to be added/updated through the UI.
$conf['allow_authorize_operations'] = FALSE;

// Don't use poormanscron.
$conf['cron_safe_threshold'] = 0;

// Set path for 403.
$conf['site_403'] = 'm4032404';

// Set up Pathologic.
$conf['pathologic_protocol_style'] = 'full';
$conf['pathologic_local_paths'] = [
  'http://elifesciences.org',
  'https://elifesciences.org',
  'http://www.elifesciences.org',
  'https://www.elifesciences.org',
  '/',
];

// File cache directory.
$conf['elife_cache_dir'] = __DIR__ . '/../cache';

// Uploaded files directories.
$conf['file_public_path'] = 'sites/default/files';
$conf['file_private_path'] = 'sites/default/private';
$conf['file_temporary_path'] = sys_get_temp_dir();

// Include the local settings, this MUST contain the $databases variable (and
// any other sensitive credentials in the future), as well as any custom
// configuration required during development.
require __DIR__ . '/../local.settings.php';

// Turn Pathologic setting into the expected string.
if (isset($conf['pathologic_local_paths'])) {
  $conf['pathologic_local_paths'] = implode("\n", $conf['pathologic_local_paths']);
}

// Use PHP's error log if Monolog hasn't been configured.
if (!isset($conf['elife_monolog_handlers'])) {
  $conf['elife_monolog_handlers'] = new ErrorLogHandler();
}
