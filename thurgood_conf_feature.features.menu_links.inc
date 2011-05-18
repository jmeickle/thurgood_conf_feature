<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function thurgood_conf_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:buildingbridges
  $menu_links['primary-links:buildingbridges'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'buildingbridges',
    'router_path' => 'buildingbridges',
    'link_title' => 'Building Bridges VI',
    'options' => array(
      'attributes' => array(
        'title' => 'The 6th event in the Building Bridges series of conferences, Justice Reinvestment on the Local Level, will take place on March 23rd, 2011.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'bounce/roundtables',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Building Bridges VI');


  return $menu_links;
}
