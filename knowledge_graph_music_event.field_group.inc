<?php
/**
 * @file
 * knowledge_graph_music_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function knowledge_graph_music_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|knowledge_graph|music_event|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'knowledge_graph';
  $field_group->bundle = 'music_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '10',
    'children' => array(
      0 => 'field_kg_location_type',
      1 => 'field_kg_location_name',
      2 => 'field_kg_location_same_as',
      3 => 'field_kg_location_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|knowledge_graph|music_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offers|knowledge_graph|music_event|form';
  $field_group->group_name = 'group_offers';
  $field_group->entity_type = 'knowledge_graph';
  $field_group->bundle = 'music_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Offers',
    'weight' => '11',
    'children' => array(
      0 => 'field_kg_offers_type',
      1 => 'field_kg_offers_url',
      2 => 'field_kg_offers_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-offers field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_offers|knowledge_graph|music_event|form'] = $field_group;

  return $export;
}
