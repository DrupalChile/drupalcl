<?php
/**
 * @file
 * issue_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function issue_features_default_rules_configuration() {
  $items = array();
  $items['rules_enviar_correo_issues'] = entity_import('rules_config', '{ "rules_enviar_correo_issues" : {
      "LABEL" : "Nuevo Comentario Issue",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Issue" ],
      "REQUIRES" : [ "rules", "flag", "drupalcl", "comment" ],
      "ON" : { "comment_insert--comment_node_issue" : { "bundle" : "comment_node_issue" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "comment:node" ], "field" : "field_issue_responsable" } }
      ],
      "DO" : [
        { "flag_fetch_users_node" : {
            "USING" : { "flag" : "subscripcion_issue", "node" : [ "comment:node" ] },
            "PROVIDE" : { "users" : { "users" : "Users who flagged" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Ctext\\u003E" },
            "PROVIDE" : { "variable_added" : { "emails" : "Emails" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "list_add" : { "list" : [ "emails" ], "item" : [ "list-item:mail" ], "unique" : 1 } }
            ]
          }
        },
        { "list_add" : {
            "list" : [ "emails" ],
            "item" : [ "comment:node:field-issue-responsable:mail" ],
            "unique" : 1
          }
        },
        { "list_remove" : { "list" : [ "emails" ], "item" : [ "comment:author:mail" ] } },
        { "drupalcl_send_mail" : {
            "emails" : [ "emails" ],
            "subject" : "[comment:name] ha realizado un comentario en el issue \\u0022[comment:node]\\u0022",
            "message" : "El usuario [comment:name] ha realizado un comentario en el Issue [comment:node]:\\r\\n\\r\\n\\u0022[comment:body]\\u0022\\r\\n\\r\\nPuede revisarlo ingresando aqu\\u00ed: [comment:url]",
            "from" : "no-reply@drupal.cl",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_seguir_un_issue_al_crearlo'] = entity_import('rules_config', '{ "rules_seguir_un_issue_al_crearlo" : {
      "LABEL" : "Seguir un Issue al crearlo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Issue" ],
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : { "node_insert--issue" : { "bundle" : "issue" } },
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "subscripcion_issue",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ],
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
