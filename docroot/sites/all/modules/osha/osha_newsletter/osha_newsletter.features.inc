<?php
/**
 * @file
 * osha_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osha_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entity_collection" && $api == "entity_collection_bundles_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function osha_newsletter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function osha_newsletter_node_info() {
  $items = array(
    'newsletter_article' => array(
      'name' => 'Newsletter article',
      'base' => 'node_content',
      'description' => 'Ad-hoc content for newsletter (such as Coming soon...)',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
