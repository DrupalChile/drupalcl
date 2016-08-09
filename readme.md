# Code base de [drupalchile.org en D8](http://d8-yot3ert7uwvyw.us.platform.sh)
## Setup platform.sh
1. Te tienen que invitar *al branch* para que tengas acceso de escritura
2. Tienes que [subir tu llave ssh](https://docs.platform.sh/user_guide/using/use-SSH.html)
3. Instalate el [platform.sh cli](https://github.com/platformsh/platformsh-cli#installation)

## Setup del repo
1. Clona este repo a tu maquina local (git clone o platform get).
2. Corre un $platform build en la raiz del repo
3. Setea tu servidor web a ```./_www```
4. Crea un archivo '''./.platform/local/shared/settings.local.php```con algo así:
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
// config dir path
$config_directories['sync'] = '../../../../../config';
```
## Exportar tu configuración local
```sh
cd _www
drush cex
git status
```
El remoto la importa sola cuando haces push ;)
