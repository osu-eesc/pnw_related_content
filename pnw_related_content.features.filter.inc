<?php
/**
 * @file
 * pnw_related_content.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pnw_related_content_filter_default_formats() {
  $formats = array();

  // Exported format: caption-copyright.
  $formats['caption_copyright'] = array(
    'format' => 'caption_copyright',
    'name' => 'caption-copyright',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <ul> <ol> <li> <dl> <dt> <dd> <div> <span>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: styled page title.
  $formats['styled_page_title'] = array(
    'format' => 'styled_page_title',
    'name' => 'styled page title',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<em> <strong> <span>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
