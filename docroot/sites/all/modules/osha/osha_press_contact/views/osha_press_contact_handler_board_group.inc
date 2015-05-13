<?php

/**
 * Provides a custom views field.
 */
class osha_press_contact_handler_board_group extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function query() {
    // do nothing -- to override the parent query.
  }

  function render($data) {
    $output = NULL;
    if (!empty($data->_field_data)) {
      reset($data->_field_data);
      $field = current($data->_field_data);
      $node = $field['entity'];
      if (!empty($node->nid)) {
        $wrapper = entity_metadata_wrapper('node', $node);
        $is_observer = $wrapper->field_is_observer->value();
        $wg_category = $wrapper->field_wg_category->value();
        if (!empty($is_observer)) {
          $output = t('Observers');
        }
        elseif (!empty($wg_category) && $wg_category->name_field['en'][0]['value'] == 'European Commission') {
          $output = t('European Commission');
        }
        else {
          $output = $wrapper->field_country->value()->name;
        }
      }
    }
    return $output;
  }
}
