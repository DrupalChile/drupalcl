; This file was auto-generated by drush make on May 17, 2016 by Nahuel
core = 8.x
api = 2

; Core
projects[drupal][version] = "8.1.3"

; By default, store all contrib modules in the "contrib" subdirectory of the
; modules directory.

defaults[projects][subdir] = "contrib"


; Modules
projects[ctools][version] = "3.0-alpha26"
projects[pathauto][version] = "1.0-alpha3"

; Themes
;projects[omega][version] = "4.4"
;projects[omega][type] = "theme"

; las copié feamente a mano libraries por ahora
; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
;libraries[ckeditor][download][type] = ""
;libraries[ckeditor][download][url] = ""
;libraries[ckeditor][directory_name] = "ckeditor"
;libraries[ckeditor][type] = "library"