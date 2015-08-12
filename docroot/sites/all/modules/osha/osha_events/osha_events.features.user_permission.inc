<?php
/**
 * @file
 * osha_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function osha_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any events content'.
  $permissions['delete any events content'] = array(
    'name' => 'delete any events content',
    'roles' => array(
      'Events Coordinator' => 'Events Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own events content'.
  $permissions['delete own events content'] = array(
    'name' => 'delete own events content',
    'roles' => array(
      'Events Coordinator' => 'Events Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
