<?php
/**
 * @file
 * knowledge_graph_music_event.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function knowledge_graph_music_event_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_kg_doortime'
  $field_bases['field_kg_doortime'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_doortime',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_end_date'
  $field_bases['field_kg_end_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_end_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_event_status'
  $field_bases['field_kg_event_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_event_status',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_image'
  $field_bases['field_kg_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_image',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_location_address'
  $field_bases['field_kg_location_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_location_address',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_location_name'
  $field_bases['field_kg_location_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_location_name',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_location_same_as'
  $field_bases['field_kg_location_same_as'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_location_same_as',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_location_type'
  $field_bases['field_kg_location_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_location_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Place' => 'Place',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_kg_name'
  $field_bases['field_kg_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_name',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_offers_name'
  $field_bases['field_kg_offers_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_offers_name',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_offers_type'
  $field_bases['field_kg_offers_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_offers_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Offer' => 'Offer',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_kg_offers_url'
  $field_bases['field_kg_offers_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_offers_url',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_previous_start_date'
  $field_bases['field_kg_previous_start_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_previous_start_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_start_date'
  $field_bases['field_kg_start_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_start_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_type'
  $field_bases['field_kg_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'MusicEvent' => 'MusicEvent',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_kg_typical_age_range'
  $field_bases['field_kg_typical_age_range'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_typical_age_range',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  // Exported field_base: 'field_kg_url'
  $field_bases['field_kg_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kg_url',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'knowledge_graph',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_knowledge_graph_mapper',
  );

  return $field_bases;
}
