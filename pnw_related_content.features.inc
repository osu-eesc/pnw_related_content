<?php
/**
 * @file
 * pnw_related_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnw_related_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnw_related_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnw_related_content_node_info() {
  $items = array(
    'image' => array(
      'name' => t('Related Image'),
      'base' => 'node_content',
      'description' => t('Use for adding related images to handbook articles and pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'relatedlink' => array(
      'name' => t('Related Link'),
      'base' => 'node_content',
      'description' => t('Use for adding a related link to the article or page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'socialmedialink' => array(
      'name' => t('Social Media Link'),
      'base' => 'node_content',
      'description' => t('Use for adding sidebar links to social media sites likes Facebook, Google+, Twitter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
