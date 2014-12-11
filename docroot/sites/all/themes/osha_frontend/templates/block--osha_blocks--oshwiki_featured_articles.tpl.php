<?php
/**
 * @file
 * Returns the HTML for a block.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728246
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <div class="related_wiki_head"><span><?php print t('OSHWiki featured articles');?><span></div>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php print $content; ?>
</div>
