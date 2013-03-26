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
  $view->name = 'related_images';
  $view->description = 'displays images related to a handbook pages and articles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'handbook-image';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'image_on_page',
    'colorbox_image_style' => 'image-colorbox',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_image_description']['id'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['table'] = 'field_data_field_image_description';
  $handler->display->display_options['fields']['field_image_description']['field'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['label'] = '';
  $handler->display->display_options['fields']['field_image_description']['element_class'] = 'caption';
  $handler->display->display_options['fields']['field_image_description']['element_label_colon'] = FALSE;
  /* Field: Content: Copyright */
  $handler->display->display_options['fields']['field_photo_copyright']['id'] = 'field_photo_copyright';
  $handler->display->display_options['fields']['field_photo_copyright']['table'] = 'field_data_field_photo_copyright';
  $handler->display->display_options['fields']['field_photo_copyright']['field'] = 'field_photo_copyright';
  $handler->display->display_options['fields']['field_photo_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_photo_copyright']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'related_images:reorder_images';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Contextual filter: Content: Attached to (field_image_attach_to) */
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['id'] = 'field_image_attach_to_nid';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['table'] = 'field_data_field_image_attach_to';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['field'] = 'field_image_attach_to_nid';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['summary_options']['items_per_page'] = '25';
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
    'image' => 'image',
  );

  /* Display: EVA related image */
  $handler = $view->new_display('entity_view', 'EVA related image', 'related_image');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = '%1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'article',
    1 => 'page',
    2 => 'subarticle',
  );

  /* Display: Reorder images */
  $handler = $view->new_display('page', 'Reorder images', 'reorder_images');
  $handler->display->display_options['display_description'] = 'draggable view for reordering images';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'draggableviews' => 'draggableviews',
    'field_image_description' => 'field_image_description',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'List of images on page';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>To change the order of the <em>%1 images</em> click, drag, and drop the + icon to the left of the image.</div>
<div>Click the <strong>Save image order</strong> button at the bottom of the page when done.</div>';
  $handler->display->display_options['header']['area']['format'] = 'caption_copyright';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div>No images have been added to the <em>%1 page</em>.</div>

<div>Click the <strong>View</strong> link to continue.</div>';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'image_on_page',
    'colorbox_image_style' => 'image_on_page',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'none',
    'colorbox_caption_custom' => '[node:field-description:value]',
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save image order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_image_description']['id'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['table'] = 'field_data_field_image_description';
  $handler->display->display_options['fields']['field_image_description']['field'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['label'] = '';
  $handler->display->display_options['fields']['field_image_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Attached to (field_image_attach_to) */
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['id'] = 'field_image_attach_to_nid';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['table'] = 'field_data_field_image_attach_to';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['field'] = 'field_image_attach_to_nid';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_image_attach_to_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/reorder_images';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reorder images';
  $handler->display->display_options['menu']['description'] = 'Use to change the order of the images';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['related_images'] = $view;

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
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
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

  /* Display: Print Friendly related links */
  $handler = $view->new_display('block', 'Print Friendly related links', 'print_related_links');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Print Related Links';
  $handler->display->display_options['display_description'] = 'displays related links on print page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_related_link']['id'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['table'] = 'field_data_field_related_link';
  $handler->display->display_options['fields']['field_related_link']['field'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['label'] = '';
  $handler->display->display_options['fields']['field_related_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_link']['type'] = 'link_separate';
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
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
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
