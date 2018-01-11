Goblin-2-plus-Sigfox
====================

-   [Introducción](#introdución)

-   [Pinout](#pinout)

-   [CONSIDERACIONES](#consideraciones)

-   [Requerimientos](#requerimientos)

-   [Ejemplo](#ejemplo)

Introducción
------------

En este repositorio se mostrará el uso de la tarjeta Goblin 2 plus Sigfox, desarrollada por VERSE Technology. La tarjeta cuenta con un microprocesador SAMD21 de 32 bits con 256 kb de memoria Flash y 32 kb de memoria SRAM. Para mas informacion sobre las caracteristicas de la tarjeta, ir al siguiente [LINK](https://verse-technology.com/goblin2plussigfox/).

Se presentará un ejemplo de como agregar distintos sensores a la tarjeta, con la finalidad de mandar toda la información de los sensores por medio de Sigfox y presentarla en un dashboard donde se pueda visualizarse de forma rapida y sencilla.

Los sensores que se utilizaran son sensores que pueden operar con 3.3 V y que pueden ser facilmente conseguidos, por ende,  pueden ser cambiados por cualquier otro, mientras se carguen las librerias necesarias en caso de ser requerido. 

Pinout
-------

En el siguiente [LINK](https://verse-technology.com/goblin2plussigfox/files/GOBLIN2PLUSSIGFOX_PINOUT_DIAGRAMA.pdf) se muestra el Pinout de la tarjeta Goblin de forma detallada.

CONSIDERACIONES
---------------

- Es importante recalcar que la tarjeta Goblin trabaja con voltajes de 3.3 V, es decir, las entradas analógicas y digitales no pueden ser alimentadas con mas de 3.3 V, de lo contrario pueden ser dañadas. 

- Para tener un buen desempeño, debe conectarse una bateria Li-po de 3.7 V en todo momento, y más si se hace uso del módulo Wisol, para mandar mensajes por Sigfox. 

Requerimientos
--------------

-   [Arduino IDE](https://www.arduino.cc/en/Main/Software)

-   [Bateria Li-po de 3.7 V, minimo de 500 mAh con conector JST 2](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/bateria.jpg)

-   Cuenta en el backend de Sigfox

-   Para el ejemplo se utilizaran los siguientes sensores:
    
    -   [Sensor de temperatura TMP102](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/tmp102.jpg)
    
Ejemplo
-------

Conectamos la Bateria Li-po en el conector JST, la antena, el cable USB a la Tarjeta y el sensor de acuerdo al siguiente diagrama. 

![gob01](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/gob01.jpeg?raw=true)

Movemos el switch hacia ON.

![gob4](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/gob4.jpeg?raw=true)

A continuación abrimos el programa de Arduino. En la barra de Herramientas seleccionamos Placa->Arduino/Genuino Zero (Native USB Port)

![gob1](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/gob1.png?raw=true)

Ahora, seleccionamos el puerto. Nos vamos a Herramientas->Puerto y seleccionamos el puerto COM abierto al conectar nuestra tarjeta.

![gob2](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/gob2.png?raw=true)

descargamos el código de ejemplo. Damos click en "Compilar" (1) y enseguida damos click en la "Subir" (2) para cargar nuestro programa. Una vez cargado nos aparecerá el mensaje “Subido”

![ar1](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/ar1.jpeg?raw=true)

Abrimos la terminal. Enseguida nos aparecerá el valor de la temperatura y su representación en hexadecimal que será enviado por Sigfox. Parpadeara el led de “Status RF” tres veces, indicando que se esta enviado la información por Sigfox 

![ar3](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/ar3.png?raw=true)

Revisando el backend, veremos la misma informacion que se acaba de enviar

![ar2](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/ar2.png?raw=true)

Ahora para decodificar el dato enviado, se debe realizar el parsing del payload. Ir al “Device type” donde se encuentra el dispositivo y dar click en el botón “Edit” en la esquina superior derecha y en la sección “Payload display” seleccionamos “Custom grammar” y en “Custom configuration” escribimos temp::float:32:little-endian

![dev10](https://github.com/Iotnet/IoTnet_DEVKIT/blob/master/images/dev10.png?raw=true)






    


