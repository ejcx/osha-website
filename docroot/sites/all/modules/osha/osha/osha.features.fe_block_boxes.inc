<?php
/**
 * @file
 * osha.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function osha_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block lists survey topics and questions';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'dvs_topics_questions';
  $fe_block_boxes->body = '<p>Survey topics</p>';

  $export['dvs_topics_questions'] = $fe_block_boxes;

  return $export;
}
