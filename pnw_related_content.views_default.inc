<?php
/**
 * @file
 * pnw_related_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnw_related_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_links';
  $view->description = 'adds related links block to articles and pages';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Related links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Links';
  $handler->display->display_options['css_class'] = 'related-links';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_related_link']['id'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['table'] = 'field_data_field_related_link';
  $handler->display->display_options['fields']['field_related_link']['field'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['label'] = '';
  $handler->display->display_options['fields']['field_related_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_link']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Attached to (field_link_reference) */
  $handler->display->display_options['arguments']['field_link_reference_nid']['id'] = 'field_link_reference_nid';
  $handler->display->display_options['arguments']['field_link_reference_nid']['table'] = 'field_data_field_link_reference';
  $handler->display->display_options['arguments']['field_link_reference_nid']['field'] = 'field_link_reference_nid';
  $handler->display->display_options['arguments']['field_link_reference_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_link_reference_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_link_reference_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_link_reference_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_link_reference_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'relatedlink' => 'relatedlink',
  );

  /* Display: Related links */
  $handler = $view->new_display('block', 'Related links', 'related_links');
  $handler->display->display_options['display_description'] = 'displays related links';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['related_links'] = $view;

  $view = new view();
  $view->name = 'social_media_links';
  $view->description = 'adds block for displaying social media links';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Media links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Media';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Social Media Site */
  $handler->display->display_options['fields']['field_social_url']['id'] = 'field_social_url';
  $handler->display->display_options['fields']['field_social_url']['table'] = 'field_data_field_social_url';
  $handler->display->display_options['fields']['field_social_url']['field'] = 'field_social_url';
  $handler->display->display_options['fields']['field_social_url']['label'] = '';
  $handler->display->display_options['fields']['field_social_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_url']['click_sort_column'] = 'url';
  /* Field: Content: Social Media Type */
  $handler->display->display_options['fields']['field_social_media_type']['id'] = 'field_social_media_type';
  $handler->display->display_options['fields']['field_social_media_type']['table'] = 'field_data_field_social_media_type';
  $handler->display->display_options['fields']['field_social_media_type']['field'] = 'field_social_media_type';
  $handler->display->display_options['fields']['field_social_media_type']['label'] = '';
  $handler->display->display_options['fields']['field_social_media_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_social_media_type']['alter']['text'] = '<div class="[field_social_media_type]"></div>';
  $handler->display->display_options['fields']['field_social_media_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_social_media_type']['alter']['path'] = 'field_social_url]';
  $handler->display->display_options['fields']['field_social_media_type']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_social_url]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_social_url]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="clear-floats"></div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Social Media Type (field_social_media_type) */
  $handler->display->display_options['sorts']['field_social_media_type_value']['id'] = 'field_social_media_type_value';
  $handler->display->display_options['sorts']['field_social_media_type_value']['table'] = 'field_data_field_social_media_type';
  $handler->display->display_options['sorts']['field_social_media_type_value']['field'] = 'field_social_media_type_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'socialmedialink' => 'socialmedialink',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'social_media_block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['social_media_links'] = $view;

  return $export;
}
