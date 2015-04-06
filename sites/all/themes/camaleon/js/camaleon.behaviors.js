(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */

  Drupal.theme.prototype.camaleonExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
  Drupal.behaviors.camaleonExampleBehavior = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.
      $('.some-selector', context).once('foo', function () {
        // Now, we are invoking the previously declared theme function using two
        // settings as arguments.
        var $anchor = Drupal.theme('camaleonExampleButton', settings.myExampleLinkPath, settings.myExampleLinkTitle);

        // The anchor is then appended to the current element.
        $anchor.appendTo(this);
      });

      new WOW().init();

      $('.nav-mobile').click(function(event) {

        var alto = $(document).height();

        $('.block--system-main-menu').toggle();

        $('.nav-mobile .fa').toggleClass('fa-bars');

        $('.nav-mobile .fa').toggleClass('fa-times');

        $('.block--system-main-menu').css('height', alto+'px');

      });

      // Dropdown main menu

      if(window.innerWidth > 769){

        $('.block--system-main-menu ul.menu li.expanded').hover(function() {

          $('.block--system-main-menu ul.menu li.expanded ul.menu').show();
          $('.fa.fa-chevron-down.fa-lg').addClass('active');
          $(this).addClass('active');

        }, function() {

          $('.block--system-main-menu ul.menu li.expanded ul.menu').hide();
          $('.fa.fa-chevron-down.fa-lg').removeClass('active');
          $(this).removeClass('active');

        });

      }else if(window.innerWidth < 768) {

        $('.block--system-main-menu ul.menu li.expanded ul.menu').show();

        // $('.block-system-main-menu > ul > li.expanded > ul').show();

        // $('.fa.fa-chevron-down.fa-lg').click(function(event) {

        //   $('.block--system-main-menu ul.menu li.expanded ul.menu').toggle();

        // });

      }

    }

  };

})(jQuery);
