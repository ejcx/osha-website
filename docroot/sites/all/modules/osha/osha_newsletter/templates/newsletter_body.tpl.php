<?php
  if (isset($campaign_id)) {
    $url_query = array('pk_campaign' => $campaign_id);
  } else {
    $url_query = array();
  }
  global $base_url;
  global $language;
  ?>
<link href='http://fonts.googleapis.com/css?family=Oswald:400,300,700' rel='stylesheet' type='text/css'>
<style>
a{
	text-decoration:none!important;
	color:#003399!important;
}

table{
	border:0px;
	border-color: #FFFFFF;
}

tr{
	border:0px;
	border-color: #FFFFFF;
}

td{
	border:0px;
	border-color: #FFFFFF;
}
</style>
<table border="0" cellpadding="28" cellspacing="0" width="800">
  <tbody>
    <tr>
      <td width="100%" style="padding-top: 0px; padding-bottom: 0px;">
        <table border="0" cellpadding="20" cellspacing="0" width="100%">
          <tbody>
            <tr>
               <td width="396" style="padding-top: 0px;vertical-align: top;padding-right:50px;" class="left-column">
                <?php
                  $elements_no = sizeof($items);
                  foreach ($items as $idx => $item) {
                    if ($item['#entity_type'] == 'taxonomy_term' && ($idx+1 <= $elements_no)) {
                      if (($idx == $elements_no-1) && ($items[$idx]['#entity_type'] == 'taxonomy_term')) {
                        continue;
                      } else if (($items[$idx+1]['#entity_type'] == 'taxonomy_term')) {
                        continue;
                      } else {
                        if ($idx != 0) {?>
                          <table border="0" cellpadding="0" cellspacing="0" class="blue-line" width="100%">
                            <tbody>
                            <tr>
                              <td style="padding-top: 15px;" class="space-above-blue-line"></td>
                            </tr>
                            <tr>
                              <td width="100%" style="background-color:#003399; height: 4px;" valign="top"></td>
                            </tr>
                            </tbody>
                          </table>
                        <?php
                        }
                        print(render($item));
                      }
                    } else {
                      if ($idx != 1 && $item["#view_mode"] == "highlights_item") {?>
                        <table border="0" cellpadding="0" cellspacing="0" width="100%">
                          <tbody>
                          <tr>
                            <td style="border-bottom:2px dotted #CFDDEE;padding-top:0px;"></td>
                          </tr>
                          <tr>
                            <td></td>
                          </tr>
                          </tbody>
                        </table>
                      <?php
                      }
                      print(render($item));
                    }
                  }
                ?>
              </td>

              <td width="308" style="vertical-align: top; padding-top: 0px; padding-right: 0px;" class="right-column">

                <?php
                  if (!empty($blogs) && sizeof($blogs) > 1) {
                    foreach ($blogs as $item) {
                      print(render($item));
                    }?>
                    <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-bottom: 15px;" class="pink-arrow">
                      <tbody>
                      <tr>
                        <td style="font-family: Oswald, Arial, sans-serif; font-size: 16px; color: #003399; text-align: right;font-weight: bold;">
                        <span>
                          <?php print l(t('View the blog'), url('node/5445', array('absolute' => TRUE)), array(
                            'attributes' => array('style' => 'color: #003399; text-decoration: none;'),
                            'query' => $url_query,
                            'external' => TRUE));
                          $directory = drupal_get_path('module','osha_newsletter');
                          print l(theme('image', array(
                            'path' => $directory . '/images/pink-arrow.png',
                            'width' => 19,
                            'height' => 11,
                            'alt' => 'link arrow',
                            'attributes' => array('style' => 'border: 0px;')
                          )), $base_url.'/'.$language->language, array(
                            'html' => TRUE,
                            'external' => TRUE
                          ));
                          ?>
                        </span>
                        </td>
                      </tr>
                      </tbody>
                    </table>
                  <?php
                  }
                ?>
                <?php
                  if (!empty($news) && sizeof($news) > 1) {?>
                    <table border="0" cellpadding="0" cellspacing="0" class="blue-line" width="100%">
                      <tbody>
                      <tr>
                        <td style="padding-top: 15px;" class="space-above-blue-line"></td>
                      </tr>
                      <tr>
                        <td width="100%" style="background-color:#003399; height: 4px;" valign="top"></td>
                      </tr>
                      </tbody>
                    </table>
                    <?php
                    foreach ($news as $item) {
                      print(render($item));
                    }?>
                    <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-bottom: 15px;" class="pink-arrow">
                      <tbody>
                      <tr>
                        <td style="font-family: Oswald, Arial, sans-serif; font-size: 16px; color: #003399; text-align: right;font-weight: bold;">
                          <span>
                           <?php print l(t('More news'), url('oshnews', array('absolute' => TRUE)), array(
                             'attributes' => array('style' => 'color: #003399; text-decoration: none;'),
                             'query' => $url_query,
                             'external' => TRUE)); 
                            $directory = drupal_get_path('module','osha_newsletter');
                            print l(theme('image', array(
                              'path' => $directory . '/images/pink-arrow.png',
                              'width' => 19,
                              'height' => 11,
                              'alt' => 'link arrow',
                            )), $base_url.'/'.$language->language, array(
                              'html' => TRUE,
                              'external' => TRUE
                            ));
                            ?>
                          </span>
                        </td>
                      </tr>
                      </tbody>
                    </table>
                  <?php
                  }
                ?>
                <?php
                if (!empty($events) && sizeof($events) > 1) {?>
                <table border="0" cellpadding="0" cellspacing="0" class="blue-line" width="100%">
                  <tbody>
                  <tr>
                    <td style="padding-top: 15px;" class="space-above-blue-line"></td>
                  </tr>
                  <tr>
                    <td width="100%" style="background-color:#003399; height: 4px;" valign="top"></td>
                  </tr>
                  </tbody>
                </table>
                <?php
                foreach ($events as $item) {
                  print(render($item));
                }?>
                <table border="0" cellpadding="0" cellspacing="0" width="100%" style="padding-bottom: 15px;" class="pink-arrow">
                  <tbody>
                  <tr>
                    <td style="font-family: Oswald, Arial, sans-serif; font-size: 16px; color: #003399; text-align: right;font-weight: bold">
                      <span>
                          <?php print l(t('More events'), url('oshevents', array('absolute' => TRUE)), array(
                            'attributes' => array('style' => 'color: #003399; text-decoration: none;'),
                            'query' => $url_query,
                            'external' => TRUE)
                          );
                          $directory = drupal_get_path('module','osha_newsletter');
                          print l(theme('image', array(
                            'path' => $directory . '/images/pink-arrow.png',
                            'width' => 19,
                            'height' => 11,
                            'alt' => 'link arrow',
                          )), $base_url.'/'.$language->language, array(
                            'html' => TRUE,
                            'external' => TRUE
                          ));
                          ?>
                        </span>
                    </td>
                  </tr>
                  </tbody>
                </table>
                <?php
                }
                ?>
              </td>
            </tr>
          </tbody>
        </table>
      </td>
    </tr>
  </tbody>
</table>