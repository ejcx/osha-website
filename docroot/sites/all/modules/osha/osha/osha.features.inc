<?php
/**
 * @file
 * osha.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osha_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "entity_collection" && $api == "entity_collection_bundles_default") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function osha_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function osha_node_info() {
  $items = array(
    'article' => array(
      'name' => 'Article',
      'base' => 'node_content',
      'description' => 'Introductions and Sections',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
    'dvs_survey' => array(
      'name' => 'DVS survey',
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
    'page' => array(
      'name' => 'Basic page',
      'base' => 'node_content',
      'description' => 'Static content, such as an \'About us\' page',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
    'webform' => array(
      'name' => 'Webform',
      'base' => 'node_content',
      'description' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
