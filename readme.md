# Code base de [drupalchile.org en D8](http://d8-yot3ert7uwvyw.us.platform.sh)
## Setup platform.sh
1. Te tienen que invitar *al branch* para que tengas acceso de escritura
2. Tienes que [subir tu llave ssh](https://docs.platform.sh/user_guide/using/use-SSH.html) 
3. Instalate el [platform.sh cli](https://github.com/platformsh/platformsh-cli#installation) (```curl -sS https://platform.sh/cli/installer | php```para los amigos)

## Setup del repo
1. Clona este repo a tu maquina local (git clone o platform get).
2. Corre un ```composer install``` en la raiz del repo
3. Setea tu servidor web a ```./web```
4. Crea un archivo ```./web/sites/default/settings.local.php``` con algo así:

```php
<?php
// Database configuration.
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'host' => '127.0.0.1',
  'username' => 'root',
  'password' => '',
  'database' => 'drupalchile',
  'prefix' => '',
  'port' => '33067',
);
```
5. Clona la db remota a tu local host con algo así:

```sh
platform drush sql-dump > d8-remote.sql
cd web
drush sql-cli < ../d8-remote.sql
rm ../d8-remote.sql
```

## Espacios de trabajo
1. Estamos en [Slack](https://drupalcl.slack.com/signup) y [trello](https://trello.com/b/CkF1edwY/web-2016#)

## Exportar tu configuración local
```sh
cd web
drush cex
git status
```
Y eventualmente:

```sh
git add .
git commit -m "el diablo es magnifico"
git push
```
El remoto la importa sola cuando haces push 😉
