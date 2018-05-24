(function($) {
  "use strict";

  // Drupal.behaviors.name = {
  //   attach: function (context, settings) {
  //   }
  // }

  // Drupal.behaviors.slider = {
  //   attach: function (context, settings) {
  //     var opt = [
  //       {
  //         slider: '.slick-slider .field__items',
  //         options: {
  //           dots: true,
  //           infinite: false,
  //           slidesToScroll: 1,
  //           slidesToShow: 1,
  //           speed: 300
  //         }
  //       }
  //     ];

  //     // Place your code here.
  //     for (var i = 0; i < opt.length; i++) {
  //       this.initialize(opt[i].slider, opt[i].options);
  //     }
  //   },
  //   initialize: function (slider, options, context) {
  //     $(slider, context).slick(options);
  //   }
  // };

//   Drupal.behaviors.svg = {
//     attach: function (context, settings) {
//       this.svgParse('svg-name', '.selector' , 'dvc_theme', context);
//     },
//     svgParse: function (el, path, theme, context) {
//       $.get('sites/all/themes/' + theme + '/images/svg/' + el + '.svg', function(data) {
//         var myvar = data.getElementsByTagName('svg')[0].outerHTML;
//         $(path).append('<div>' + myvar + '</div>');
//       });
//     }
//   }

})(jQuery);
