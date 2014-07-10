<?php
/**
 * @file
 * svendborg_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function svendborg_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: svendborg_content_image.
  $styles['svendborg_content_image'] = array(
    'name' => 'svendborg_content_image',
    'label' => 'svendborg_content_image',
    'effects' => array(
      11 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      12 => array(
        'label' => 'Beskær',
        'help' => 'Beskæring fjerner dele af billedet for at give det de angivne dimensioner.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 900,
          'height' => 419,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: svendborg_spotbox.
  $styles['svendborg_spotbox'] = array(
    'name' => 'svendborg_spotbox',
    'label' => 'svendborg_spotbox',
    'effects' => array(
      13 => array(
        'label' => 'EPSA Image Crop',
        'help' => '',
        'dimensions callback' => 'epsacrop_crop_dimensions',
        'effect callback' => 'epsacrop_crop_image',
        'form callback' => 'epsacrop_crop_image_form',
        'module' => 'epsacrop',
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 272,
          'height' => 126,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => 2.15,
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
