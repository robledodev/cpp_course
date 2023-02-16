# Curso C++ para PRINCIPIANTES

### Ejercicio 1

```
El fichero telefonia.txt contiene un listado de llamadas telefónicas. Cada línea del fichero detalla los datos de
una llamada: El número de teléfono que inicio la llamada (prefijo país y número) y el de destino (prefijo país y
número), así como la duración en segundos de la llamada y el tipo de cliente (C para común, o P para “prime”).

Ejemplo de una llamada internacional de 223.3 segundos de cliente “prime”:

33 629876573 49 689257492 223.3 P

Se solicita desarrollar un programa con las siguientes funcionalidades:
1. Calculo del coste base de cada llamada y mostrarlas por pantalla de acuerdo a la siguiente tabla de tarifas:

Tarifa          Precio/segundo  Precio a partir del minuto 3
Nacional        0.02€           0.015 €
Internacional   0.04€           0.035 €

Ejemplo: Coste de llamada internacional de 223.3 seg. → 0.04 * 180 + 53 * 0.035 = 7.2 + 1.855 = 9.055 €

2. Calcular descuentos y escribir en fichero: 
La compañía telefónica ha establecido que los clientes “prime” no tienen un descuento si su número de teléfono es 
divisible por 3, pero no divisible por 4. En este caso se les aplica un descuento cuyo tanto-por-ciento es igual 
a los dos últimos dígitos de su número de teléfono.

Ejemplo: El número 629876573 tiene un descuento del 73% y el coste final es 2.44485 EUR.
En el fichero “descuentos.txt” se escribirá el número, porcentaje y costo de aquellas llamadas que cumplan
las condiciones indicando el descuento.

3. Resumen facturación
Tras procesar el listado de las llamadas, el programa mostrará por pantalla el importe total facturado con las
mismas y el número de clientes que han obtenido un descuento.

Ejemplo: El importe total facturado es de 120,34€.
El numero de clientes con descuento son 4.
```

### Ejercicio 2
```
El fichero “logistica.txt” contiene un listado de órdenes de transporte. Cada línea es una orden que incluye: 
código numérico, si el transporte es nacional (N) o internacional (I), así como las dimensiones del objeto a 
transportar (ancho, alto y profundidad). 
Ejemplo de orden: 1987654 N 40.2 23.0 35.2

1. Coste del embalaje. Se solicita desarrollar un programa que determine el coste de transporte. La compañía de 
transporte usa dos tipos de embalaje:

        Dimensiones      Precio
Tipo A  40 x 20 x 50     14,5 EUR
Tipo B  80 x 40 x 100    26,8 EUR

El coste de transporte también depende de si el objeto es frágil, el embalaje ecológico y el transporte
nacional (N) o internacional (I). Los dos últimos dígitos de la orden de transporte representan la codificación
de las características adicionales del paquete:
• Si el ultimo dígito es par, el objeto es frágil.
• Si el penúltimo dígito es impar, el embalaje debe ser ecológico.
Ejemplo: La orden 1987654 N es un transporte nacional, el objeto es frágil y el embalaje ecológico.
El coste se incrementará acumulativamente de acuerdo a la siguiente tabla:

                Incremento Coste
Frágil          15%
Ecológico       23%
Internacional   12%

El programa debe mostrar por pantalla cual es el coste de cada orden de transporte:
Ejemplo: El coste de la orden de transporte 1987654 N es de 37.9086 EUR.

Si no es posible empaquetar el objeto por no caber en ninguno de los dos embalajes, el programa debe reportar
un mensaje de advertencia:
Ejemplo: La orden de transporte 753823 N excede las dimensiones admitidas.

2. Resumen - Tras procesar el listado de órdenes, el programa mostrará por pantalla:
a) El número de embalajes de tipo A y B empleados.
b) El porcentaje de objetos frágiles y de embalajes ecológicos respecto al total de embalajes.

Ejemplo:
Ordenes tipo A: 18, tipo B: 42
Objetos fragiles: 50%
Embalajes ecologicos: 10%
```

### Examen Final
```
1. Una conferencia ha recibido una serie de articulos de investigacion. Cada uno corresponde a un
autor. Los autores solo pueden enviar un articulo a la conferencia. Cada articulo tiene que
ser aceptado o declinado por un revisor, y cada revisor solo puede revisar un maximo de 5 
articulos.
Tenemos 2 ficheros:
- El primer fichero de autores (autores.txt) que han enviado un articulo. De cada autor tenemos:
    - Un ID alfanumèrico
    - Un Id numèrico del articulo
    - Un número que identifica el area cientifica a la que pertenece el articulo (por ejemplo,
      7 para el area de "energias renovables")
- El segundo fichero de revisores (revisores.txt) que han aceptado revisar articulos. De cada
revisor tenemos:
    - Un ID alfanumèrico
    - Un número que identifica el area cientifica donde los revisores son expertos (solo una). A
      los revisores solo se le asignaran articulos de su area.
    - La lista de IDs de (maximo 5) articulos asignados para revisar (Esta información no esta
      originalmente en el fichero)
    
Se tiene que desarrollar:
a) Las estructuras de datos necesarias para guardar toda la información de los autores y
   revisores
b) Asumiendo que los datos ya estan guardados. Un subprograma que, dado el listado de revisores
   y la información de un autor, asigne el ID del articulo de este autor al primer revisor del 
   listado del area cientifica del cual coincida con la del articulo (siempre que el revisor
   no tenga 5). El subprograma devolverá el listado de revisores actualizado, asi como un valor
   que indique si se ha encontrado algun revisor o no para el articulo.
c) Un subprograma que, usando el del apartado previo, reciba el listado de revisores y autores
   y asigne a los revisores todos los articulos que pueda. Devolvera el listado de revisores
   actualizados, asi como un nuevo listado con aquellas posiciones dentro del listado de autores
   donde se encuentran los articulos que no se han podido asignar a ningun revisor.
d) Un subprograma que, dado el listado de revisores y el ID de un articulo, devuelva el ID
   de su revisor, o un mensaje indicando "ARTICULO NO ENCONTRADO"
   
2. Como continuación del problema 1 y considerando los subprogramas y estructuras que se 
proponen como implementadas, se tiene que elaborar un programa completo que:

a) Llamar a un subprograma que lea los datos de los ficheros y se guarden en las estructuras
   correspondientes
b) Guardar en un fichero articulos_sin_revisor.txt aquellos articulos que no se le han podido
   asignar revisor
c) Guardar en un segundo fichero revisores_disponibles.txt los IDs de los revisores que no 
   cumplan con la cuota de revision de 5 articulos
d) En un menú iterativo, ofrecer al usuario las opciones de:
   A- Mostrar el ID del revisor con el ID del articulo el cual se introduzca por teclado
   S- Salir
   (Si no se introduce A o S, mostrar por pantalla un mensaje "OPCION ERRONEA"
   
3. Se pide que se haga un programa que lea una matriz de NxN y compruebe si cumple las dos
propiedades siguientes
- Es antisimètrica, es decir, todos los elementos de la posicion ij(excepto los de la diagonal)
  son iguales al de la posicion ji cambiado de signo. Esto quiere decir que, para todos los
  elementos (excepto los de la diagonal) se cumpla que m[i][j] = -m[j][i]
- Todos los elementos de la diagonal son iguales entre si

El programa tendrá que leer la matriz y indicar que se cumplen las 2 propiedades, y en caso
contrario, las propiedades que no se cumplen.
N sera una constante con valor 3 (pero la solución tiene que ser valida para cualquier valor
de N.

Por ejemplo:
 1  2  3
-2  1  4
-3 -4  1
El programa escribiria: SI, la matriz  es antisimètrica y todos los elementos de la diagonal
son iguales

Si la matriz es:
 1  2  3
-2  1  4
-3 -4  5
El programa escribiria: NO, los elementos de la diagonal no son iguales 
```