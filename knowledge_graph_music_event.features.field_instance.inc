<?php
/**
 * @file
 * knowledge_graph_music_event.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function knowledge_graph_music_event_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_doortime'
  $field_instances['knowledge_graph-music_event-field_kg_doortime'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The time admission commences, in ISO-8601 format.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_doortime',
    'label' => 'doorTime',
    'required' => 0,
    'settings' => array(
      'group' => '',
      'property' => 'doorTime',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_end_date'
  $field_instances['knowledge_graph-music_event-field_kg_end_date'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The end date and time of the event, in ISO-8601 format.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_end_date',
    'label' => 'End Date',
    'required' => 0,
    'settings' => array(
      'group' => '',
      'property' => 'endDate',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_event_status'
  $field_instances['knowledge_graph-music_event-field_kg_event_status'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The event\'s cancellation status, if applicable. Must be one of the example values at right.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_event_status',
    'label' => 'Event Status',
    'required' => 0,
    'settings' => array(
      'group' => '',
      'property' => 'eventStatus',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_image'
  $field_instances['knowledge_graph-music_event-field_kg_image'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL of an image or logo for the event or tour',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'group' => '',
      'property' => 'image',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_location_address'
  $field_instances['knowledge_graph-music_event-field_kg_location_address'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_location_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'group' => 'location',
      'property' => 'address',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_location_name'
  $field_instances['knowledge_graph-music_event-field_kg_location_name'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The venue name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_location_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'group' => 'location',
      'property' => 'name',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_location_same_as'
  $field_instances['knowledge_graph-music_event-field_kg_location_same_as'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URL of the venue\'s official website.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_location_same_as',
    'label' => 'Url',
    'required' => 0,
    'settings' => array(
      'group' => 'location',
      'property' => 'sameAs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_location_type'
  $field_instances['knowledge_graph-music_event-field_kg_location_type'] = array(
    'bundle' => 'music_event',
    'default_value' => array(
      0 => array(
        'value' => 'Place',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_location_type',
    'label' => '@type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_name'
  $field_instances['knowledge_graph-music_event-field_kg_name'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'group' => '',
      'property' => 'name',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_offers_name'
  $field_instances['knowledge_graph-music_event-field_kg_offers_name'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A user-visible name for the ticket type.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_offers_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'group' => 'offers',
      'property' => 'name',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_offers_type'
  $field_instances['knowledge_graph-music_event-field_kg_offers_type'] = array(
    'bundle' => 'music_event',
    'default_value' => array(
      0 => array(
        'value' => 'Offer',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_offers_type',
    'label' => '@type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_offers_url'
  $field_instances['knowledge_graph-music_event-field_kg_offers_url'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URL of a page providing the ability to buy tickets. This URL must:
direct to a landing page which clearly and predominantly provides, to any user from the general public, the opportunity to buy a ticket offering admittance to that specific event, as well as schema.org/Event markup with offer details
be a link that is also present as a clickable link on the web page containing the data (i.e., not only in the markup)
be followable by the Googlebot, i.e., not blocked by robots.txt',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_offers_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'group' => 'offers',
      'property' => 'url',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_previous_start_date'
  $field_instances['knowledge_graph-music_event-field_kg_previous_start_date'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The previously scheduled date (only if eventStatus is set).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_previous_start_date',
    'label' => 'Previous Start Date',
    'required' => 0,
    'settings' => array(
      'group' => '',
      'property' => 'previousStartDate',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_start_date'
  $field_instances['knowledge_graph-music_event-field_kg_start_date'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The start date and time of the event, in ISO-8601 format.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_start_date',
    'label' => 'Start date',
    'required' => 1,
    'settings' => array(
      'group' => '',
      'property' => 'startDate',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_type'
  $field_instances['knowledge_graph-music_event-field_kg_type'] = array(
    'bundle' => 'music_event',
    'default_value' => array(
      0 => array(
        'value' => 'MusicEvent',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_type',
    'label' => '@type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_typical_age_range'
  $field_instances['knowledge_graph-music_event-field_kg_typical_age_range'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The expected age range.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_typical_age_range',
    'label' => 'Typical Age Range',
    'required' => 0,
    'settings' => array(
      'group' => '',
      'property' => 'typicalAgeRange',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'knowledge_graph-music_event-field_kg_url'
  $field_instances['knowledge_graph-music_event-field_kg_url'] = array(
    'bundle' => 'music_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL of a page providing details about the event.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'knowledge_graph_mapper_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'knowledge_graph',
    'field_name' => 'field_kg_url',
    'label' => 'Url',
    'required' => 0,
    'settings' => array(
      'group' => '',
      'property' => 'url',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'knowledge_graph',
      'settings' => array(),
      'type' => 'knowledge_graph_mapper',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('@type');
  t('A user-visible name for the ticket type.');
  t('Address');
  t('End Date');
  t('Event Status');
  t('Image');
  t('Name');
  t('Previous Start Date');
  t('Start date');
  t('The URL of a page providing the ability to buy tickets. This URL must:
direct to a landing page which clearly and predominantly provides, to any user from the general public, the opportunity to buy a ticket offering admittance to that specific event, as well as schema.org/Event markup with offer details
be a link that is also present as a clickable link on the web page containing the data (i.e., not only in the markup)
be followable by the Googlebot, i.e., not blocked by robots.txt');
  t('The URL of the venue\'s official website.');
  t('The end date and time of the event, in ISO-8601 format.');
  t('The event\'s cancellation status, if applicable. Must be one of the example values at right.');
  t('The expected age range.');
  t('The previously scheduled date (only if eventStatus is set).');
  t('The start date and time of the event, in ISO-8601 format.');
  t('The time admission commences, in ISO-8601 format.');
  t('The venue name.');
  t('Typical Age Range');
  t('URL');
  t('URL of a page providing details about the event.');
  t('URL of an image or logo for the event or tour');
  t('Url');
  t('doorTime');

  return $field_instances;
}
