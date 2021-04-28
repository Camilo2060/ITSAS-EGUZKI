# ITSAS-EGUZKI
  <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/PORTADA.PNG">

# INTRODUCCIÓN
Para terminar este segundo año de mantenimiento electrónico se nos ha planteado crear un barco alimentado mediante una placa solar. Aparte de esto debe incluir un piloto automático programado mediante arduino y que la placa solar se oriente hacia el sol automaticamente tambien durante todo el trayecto para así conseguir el máximo rendimiento. Este proyecto participará en el torneo que se celebrará en Galicia en Junio.
# Bases de la regata
Nuestro proyecto es un barco solar, este proyecto tenemos que llevarlo a un campeonato que se celebra en Galicia en Junio. Para poder participar en el proyecto tenemos que cumplir una serie de requisitos y necesidades.
</p>
- El barco como fuente de alimentación dispondrá de una placa solar, solamente de una placa solar, por lo tanto, no se puede utilizar ninguna batería para almacenar energía para cuando no haya tanta luz.
</p>
- El barco lo tenemos que controlar con una emisora.
</p>
- El barco hay que impulsarlo con  motores eléctricos y se pueden utilizar más de uno.
</p>
- El barco lo podemos construir como queramos y  con los materiales que deseemos.
</p>
- Solamente podremos utilizar unas pilas para alimentar la emisora del barco (mando radiocontrol).
	Siguiendo estos pasos construiremos nuestro barco solar

# PROCEDIMIENTO
Para que el proyecto no se haga tan pesado y se pueda aprovechar el tiempo lo vamos a dividir en  partes para que sea más fácil de entender.


# PARTES QUE COMPONEN EL PROYECTO Y EL FUNCIONAMIENTO:
El proyecto se divide en 4 partes:
 <p align="center">
  <img width="500" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/PARTES%20DEL%20BARCO.PNG?raw=true">
	
# PROGRAMACIÓN: 

En esta parte utilizaremos un teensy como cerebro del barco, para así poder hacer funcionar los motores de agua como los motores de la orientación de la placa solar.
<p align="left">
  <img width="500" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/TEENSY.jpg">
	
Por otro lado consta de un magnetómetro (brújula) para que este informe al teensy en todo momento de su posición para la función de piloto automático.
<p align="left">
  <img width="500" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Magnetometro.jfif">

# MECANICA:

Dentro del apartado mecanica vamos a tener:

-Patines: Hechos de poliestireno extruído, o espuma rígida que hará que el barco flote.
 <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Patines/Patines.PNG">

-Chasis : Un esqueleto de aluminio que unirá todos los componentes del barco en una sola pieza.
 <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Chasis/Chasis.PNG">
	
-Motores de agua: Dos pequeños motores acuaticos , los cuales empujará nuestro barco.
 <p align="center">
  <img width="600" height="300" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Motores%20de%20agua/motores.PNG">
	
-Motores de orientación placa solar: Cuatro motores paso a paso que orientarán la placa mediante sus movimientos.
 <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Motores%20placa%20solar/MOTORES%20ORIENTACI%C3%93N%20PLACA.PNG">
	
-Hélices: Dos pequeñas helices de material plástico, sólido y duradero, con un eje de 4 mm. Con un fuerte empuje y ligeras. En la siguiente imagen se observa las diferentes hélices que se han probado viendo su rango de eficacia y cual nos daría mas fuerza de empuje, velocidad y poco consumo.
 <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Helices/Helices.PNG">
	
# ELECTRÓNICA:
En este bloque nos encontraremos con una PCB que ha sido diseñada para unir cada componente electrónico, esta sera una de las partes importantes del barco, será el cerebro ya que controlará el barco. Ha sido diseñada mediante un programa llamado Proteus y seguidamente fresada para su utilización.

En la primera imagen se observa el diseño realizado en Proteus:
 <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/tarjeta%20de%20circuito%20impreso/Esquema%20PCB.PNG"> 
	
Resultado final:
 <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/tarjeta%20de%20circuito%20impreso/IMG-5713.jpg"> 
	
# ALIMENTACIÓN
Para alimentar el barco se utilizará una placa solar que nos proporcionará 100W de potencia, ya que no se podrá utilizar una batería en la competeción, la placa será la fuente de alimentación capaz de alimentar las necesidades de muestro barco.
 <p align="center">
  <img width="700" height="500" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Placa%20solar/PLACA%20SOLAR.PNG"> 
	
#FUNCIONAMIENTO DEL BARCO

Para empezar la placa solar que se encuentra en la parte superior alimentará a todo los elementos que se encuentren en el barco, por ejemplo, teensy, motores de agua, receptor etc. Una vez alimentado todo los componentes, con nuestro mando (emisora) le mandaremos señales al receptor y este al teensy. Según la información que reciba el teensy el barco empezará a moverse y mantendrá el rumbo que le hemos asignado. Para ello dispone de un magnetómetro (gps) que le estará informando al teensy en  todo el momento de la ubicación que tiene el barco. Gracias a la programación, el teensy sabra darle mas o menos  potencia a los motores de agua para mantener su rumbo. Aparte de eso el teensy gobernará los motores de la placa solar para orientar hacia el sol e incrementar la potencia del barco durante todo el trayecto.

# Puesta en marcha: 
Aquí se explican todas las pruebas realizadas, los test que hemos hecho y la puesta en marcha:
Para poner en marcha lo primero que hicimos fue un testeo, para ello utilizamos un polímetro para mirar todas las tensiones que había en todos los componentes estuviesen correctos. Después de esto comprobamos que la señal que mandaba el mando,  los interpreta bien el barco. Las  mejoras se realizaron  después de haber probado en el agua. Nos dimos cuenta que para sacar el máximo rendimiento a los motores de agua teníamos que añadir a la programación un MPPT( maximum power point track). Esta parte de la programación será la encargada de sacar toda la potencia a los motores, incluso cuando los rayos del sol no sean lo suficientemente fuertes para alimentar la placa solar. Otra de las cosas que nos dimos cuenta fue que los patines los teníamos que hacer más cortos y más hidrodinámicos para así poder coger más rápido las curvas.

#Pruebas:
En este proyecto se han hecho un montón de pruebas en general, pero a continuación se van a comentar las más importantes:

PRUEBAS DE BANCADA (MOTORES):
Para hacer estas pruebas construimos una bancada de fuerza, en esta bancada se podía apreciar la fuerza que ejercen los motores dentro del agua.
 <p align="center">
  <img width="700" height="300" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Motores%20de%20agua/FUERZA%20QUE%20EJERCEN%20MOTORES.PNG"> 
	
PRUEBAS DE BANCADA (HÉLICES):
Una vez elegido el motor (F2838-350KV), era necesario saber qué hélice era el más eficaz, para ello se hicieron otras pruebas intercambiando y anotando el resultado obtenido. Al final decidimos elegir la helice de 3 aspas de color verde.
<p align="center">
  <img width="700" height="300" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Helices/PRUEBA%20FUERZA%20HELICES.PNG">
	
# FABRICACIÓN DE LAS PARTES DEL BARCO
A continuación se explicará cómo se han fabricado cada elemento del barco.

PATINES:
Los patines son unas piezas fundamentales en la construcción del barco ya que aparte de darle flotabilidad se deslizara encima de estos. Decidimos que tenía que ser de una densidad menor que el agua y a la vez muy ligero. Por lo tanto, después de estudiar los diferentes materiales que habían en el mercado elegimos el poliestireno extruido. Una vez elegido el material había que darle una forma hidrodinámica para oponerle la menor resistencia al agua. Primero cogimos la placa de poliestireno y sacamos  de ahí dos vigas cuadradas, después se corta en forma de V y para acabar, se le saca puenta en la parte delantera y atras menos punta.
<p align="center">
  <img width="700" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Patines/Proceso%20de%20patines.PNG">

CHASIS:
Para hacer este chasis, cogimos en cuenta las medidas de la placa solar con los motores de la placa solar colocados. Así sabíamos que el chasis tenía que ser del mismo tamaño que la placa solar con los motores colocados. Después de esto pensamos que toda la electrónica debería ir colocada en algún sitio y pensamos que para repartir el peso lo mejor sería poner en el centro del chasis una superficie plana y en esa superficie toda la electrónica metida en una caja impermeable. Pero aquí no acaba todo, también tuvimos que pensar unos soportes para colocar los motores de agua. Para ello le hicimos unas escuadras a 90º grados. Para no andar uniendo las partes del chasis con tornillos, remaches, soldando etc. hicimos el chasis entero solo de una pieza y en aluminio. 
<p align="center">
  <img width="700" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Chasis/Proceso%20de%20chasis.PNG">

SOPORTES DE LOS MOTORES DE LA PLACA SOLAR:
Los motores de la placa solar tenían que ir atados al chasis, pero tenían que ser flexibles al mismo tiempo. Es decir, tenían que inclinarse para que la placa solar se levantará más de un lado que del otro porque si estuvieran rígidos sería imposible este movimiento que hemos comentado. Después de estar pensando varias opciones para hacer este movimiento pensamos, que la mejor manera para hacer bascular los motores era colocar los motores encima de una superficie elástica y esta superficie atarla al chasis.
<p align="center">
  <img width="700" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Motores%20placa%20solar/Proceso%20motores%20paso%20a%20paso%20cion%20esquinas.PNG">

SOPORTES DE LA PLACA SOLAR:
La placa solar para poder subir y bajar tenía que tener las cuatro esquinas flexibles y no rígidas porque si no fueran así sufriría mucho la placa y podría llegarse a romper. Por lo tanto pensamos que lo mejor sería cortar las 4 esquinas y fabricar unas esquinas flexibles para facilitar el movimiento de la placa solar.
<p align="center">
  <img width="700" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/Placa%20solar/Proceso%20esquinas%20placa%20solar.PNG">

ESQUEMA ELÉCTRICO:
<p align="center">
  <img width="700" height="400" src="https://github.com/Camilo2060/ITSAS-EGUZKI/blob/main/Im%C3%A1genes/ESQUEMA%20ELECTRICO.PNG">
