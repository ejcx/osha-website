<?php
/**
 * @file
 * osha_legislation.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function osha_legislation_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_legislation';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'directive' => 'directive',
        'guideline' => 'guideline',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/11' => 'node/11',
        'node/2544' => 'node/2544',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['context_legislation'] = $context;

  return $export;
}
