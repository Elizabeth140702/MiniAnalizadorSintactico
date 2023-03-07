# MiniAnalizadorSintactico
Este código analiza los ejercicios 1 y 2 del archivo (PracticaAnalizadorSintactico.pdf).
Contiene una pila que va introduciendo y quitando cada uno de los elementos. Hay 2 funciones para cada uno de los ejercicios, el primero es el siguiente:
Primero introducimos a la pila los números 1, 2 y 3, estos representan las palabras "Hola + Mundo" en ese orden.
Conociendo los principios de la pila "Last in, first out", sabemos que el último número que tenemos es el 3, es el primero que se saca también, es por ello que tenemos el siguiente código:

![image](https://user-images.githubusercontent.com/84193277/223307154-34260864-ccd9-4eb4-9a03-92356f1c5c5c.png)

Este código primero muestra el tope de la pila, en este caso el 3 (Mundo), luego quita este tope y lo muestra, o sea el 2 (+), hace lo mismo una vez más y muestra el 1 (Mundo), por último lo quita y verifica si está vacía la pila, de ser así nos lo hace saber con un signo de pesos $, esto se ve así ya ejecutado:

![image](https://user-images.githubusercontent.com/84193277/223308005-f33e5b5f-bf99-49d8-924b-63e1be0376dc.png)


Para el ejercicio 2 tenemos la misma metodología pero ahora con el ejemplo de a+b+c+d+e+f, el código se ve de la siguiente manera:

![image](https://user-images.githubusercontent.com/84193277/223308239-d046f168-232d-4e0f-a9f2-6a1757c72a13.png)

Ejecutado se ve de la siguiente manera:

![image](https://user-images.githubusercontent.com/84193277/223308322-1dc22e26-6232-409e-a419-a530608b3b07.png)

