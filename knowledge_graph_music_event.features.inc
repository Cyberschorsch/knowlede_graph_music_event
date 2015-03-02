<?php
/**
 * @file
 * knowledge_graph_music_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function knowledge_graph_music_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_knowledge_graph_type().
 */
function knowledge_graph_music_event_default_knowledge_graph_type() {
  $items = array();
  $items['music_event'] = entity_import('knowledge_graph_type', '{ "type" : "music_event", "label" : "Music Event" }');
  return $items;
}
