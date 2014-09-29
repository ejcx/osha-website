<?php
/**
 * @file
 * osha_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function osha_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Join OSHMail subscribers';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'join_oshmail_subscribers';
  $fe_block_boxes->body = '<div id="join_subscribers"><img src="/sites/all/themes/osha_frontend/images/content/blocks/join_65000_subscribers.png" alt="Join OSHMail Subscribers" /></div>';

  $export['join_oshmail_subscribers'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Subscribe categories - static block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'oshmail_subscribe_categories';
  $fe_block_boxes->body = '<div><ul><li>Latest <strong>news</strong> from <br />around the world</li><li>Forthcoming <br /><strong>events</strong></li><li>Latest Agency <br /><strong>publications</strong></li><li>Updates on EU <br /><strong>legislation</strong></li><li>In 24 <br /><strong>languages</strong></li><li><strong>Free</strong><br /> subscriptions</li></ul></div>';

  $export['oshmail_subscribe_categories'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header for Publications page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'publications_header';
  $fe_block_boxes->body = '<p>Our publications range from in-depth research reports to topical e-facts, designed for use in the workplace. All are free to download. You can search the library by publication type or keyword. You might also like to subscribe to our free monthly newsletter — it makes keeping up to date with OSH easy.</p>';

  $export['publications_header'] = $fe_block_boxes;

  return $export;
}