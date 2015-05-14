(function ($){
	Drupal.behaviors.wysiwyg_accordion_theme_createAccordions = {
		attach:function (context) {
            $( "div.wysiwyg_accordion" ).each(function(idx, elem){
                var $this = $(elem);
                $this.accordion({
                    heightStyle: "content",
                    collapsible: true,
                    animate: false,
                    active: $this.hasClass('accordion-init-inactive') ? false : 0
                });
            });
		}
	}
}(jQuery));
