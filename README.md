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

- Es importante reacalcar que la tarjeta Goblin trabaja con voltajes de 3.3 V, es decir, las entradas analógicas y digitales no pueden ser alimentadas con mas de 3.3 V, de lo contrario pueden ser dañadas. 

- Para tener un buen desempeño, debe conectarse una bateria Li-po de 3.7 V en todo momento, y más si se hace uso del módulo Wisol, para mandar mensajes por Sigfox. 

Requerimientos
--------------

-   [Arduino IDE](https://www.arduino.cc/en/Main/Software)

-   [Bateria Li-po de 3.7 V, minimo de 500 mAh con conector JST 2](https://github.com/Iotnet/Goblin-2-plus-Sigfox/blob/master/imagenes/bateria.jpg)

-   Cuenta en el backend de Sigfox

-   Para el ejemplo se utilizaran los siguientes sensores:
    
    -   Sensor de temperatura TMP102
    
Ejemplo
-------





    


