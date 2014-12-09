<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * camaleon theme.
 */
function camaleon_breadcrumb($variables) {
  return path_breadcrumbs_breadcrumb($variables);
}