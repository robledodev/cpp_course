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
````
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