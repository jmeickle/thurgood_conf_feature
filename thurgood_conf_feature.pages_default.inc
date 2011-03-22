<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function thurgood_conf_feature_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'buildingbridges';
  $page->task = 'page';
  $page->admin_title = 'Building Bridges';
  $page->admin_description = '';
  $page->path = 'buildingbridges';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_buildingbridges_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'buildingbridges';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '50',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '50',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Building Bridges VI: Justice Reinvestment on the Local Level';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left_above';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Registration is now available!',
      'body' => '<h3><a href="http://www.ccsu.edu/BBIV">Click here to register for the event.</a></h3>',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left_above'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'left_above';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'The 6th event in the <a href="http://www.ccsu.edu/page.cfm?p=5139">Building Bridges series of conferences</a>, <i>Justice Reinvestment on the Local Level</i>, will take place on March 23rd, 2011. The event will run from 8 AM to 1 PM in Alumni Hall, located in the Student Center at Central Connecticut State University. The keynote will be delivered by Mike Lawlor, Undersecretary for Criminal Justice Policy and Planning at the State of Connecticut Office of Policy and Management.

More details will be forthcoming at this web address as the event\'s schedule, location, and speakers are finalized. For questions, please contact Lyndsay Ruffolo at ruffololyd@ccsu.edu.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['left_above'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'left_above';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What is justice reinvestment?',
      'body' => 'As defined by the Urban Institute\'s Justice Policy Center:
<cite>Justice reinvestment is a systemwide process designed for local leaders who want to rethink how they allocate resources throughout their criminal justice and social service systems. It is for city and county oﬃcials who are aiming not just to contain criminal justice costs, but also to achieve a greater public safety impact from current resources. Importantly, justice reinvestment is not a single decision, project, or strategy. Rather, it is a multistaged and ongoing process whereby local stakeholders collaborate across city and county systems to identify drivers of criminal justice costs and then develop and implement new ways of reinvesting scarce resources–both in the community and within the jail system–in a manner that yields a more costbeneﬁcial impact on public safety.</cite>

For more information about justice reinvestment, please see their publication titled <a href="http://www.urban.org/center/jpc/justice-reinvestment/upload/Guidebook.pdf" target="_blank"><i>Justice Reinvestment at the Local Level: Planning and Implementation Guide</i>.

Connecticut-specific justice reinvestment resources include <a href="http://justicereinvestment.org/states/connecticut/how-ct">the Justice Policy Center\'s implementation details</a> and <a href="http://www.pewcenteronthestates.org/initiatives_detail.aspx?initiativeID=56238">the Pew Center on the State\'s Public Safety Policy Solutions.</a>',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['left_above'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'views-conference_calendar-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Event Schedule (draft)',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['right_above'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['buildingbridges'] = $page;

 return $pages;

}
