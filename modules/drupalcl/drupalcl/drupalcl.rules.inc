<?php



/**
 * Implements hook_rules_action_info().
 */
function drupalcl_rules_action_info() {
  $actions = array();

  $actions['drupalcl_send_mail'] = array(
    'group' => 'Drupal.cl',
    'label' => t('Send Mail from list of emails'),
    'parameter' => array(
      'emails' => array(
        'type' => 'list',
        'label' => t('Emails'),
        'description' => 'La lista de correos para enviar', // @TODO: traducir
        'optional' => FALSE,
        'restriction' => 'selector',
        'allow null' => FALSE,
      ),
      'subject' => array(
          'type' => 'text',
          'label' => t('Subject'),
          'description' => t("The mail's subject."),
          'translatable' => TRUE,
      ),
      'message' => array(
        'type' => 'text',
        'label' => t('Message'),
        'description' => t("The mail's message body."),
        'translatable' => TRUE,
      ),
      'from' => array(
        'type' => 'text',
        'label' => t('From'),
        'description' => t("The mail's from address. Leave it empty to use the site-wide configured address."),
        'optional' => TRUE,
      ),
      'language' => array(
        'type' => 'token',
        'label' => t('Language'),
        'description' => t('If specified, the language used for getting the mail message and subject.'),
        'options list' => 'entity_metadata_language_list',
        'optional' => TRUE,
        'default value' => LANGUAGE_NONE,
        'default mode' => 'selector',
      ),
    ),
    'base' => 'drupalcl_rules_action_send_mails',

  );

  return $actions;
}