<?php

/**
 * Removed wrapper prefix and suffix for wysiwyg_accordion
 */
?>
  <?php if (!empty($title)) : ?>
    <h4><?php print $title; ?></h4>
  <?php endif; ?>
  <div class="view-content-group-2">
    <?php foreach ($rows as $id => $row): ?>
      <div class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></div>
    <?php endforeach; ?>
  </div>
