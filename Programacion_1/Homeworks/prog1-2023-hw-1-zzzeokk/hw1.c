/*
Nombre de archivo: hw1.c (No cambiar el nombre de este archivo)
El repositorio donde esta tu HW1 es: github.com/unlu-edu-ar/prog1-2022-hw-1-TuNombreDeUsuarioGithub
Importante: No cambiar el nombre del archivo

Completa con tu nombre, apellido y DNI
Nombre y Apellido: Gianluca Mainetti
DNI: 45579590
*/

/* Programe una funcion que recibe como parametros un vector v 
de numeros enteros, su cantidad de elementos n, y un entero k, 
y devuelve la cantidad de apariciones de k en v.
*/
int apariciones(int v[], int n, int k){
   int i;
   int contador = 0;

   for (i=0;i<n;i++){
      if(v[i] == k){
         contador++;
      }
   }
   return contador;
}

/* Programe una funcion que reciba como parametro un vector v 
de numeros enteros mayores o iguales a cero, y su cantidad de 
elementos n, y retorne el mayor elemento del vector.
*/
int mayor(int v[], int n){
   int i;
   int mayor = 0;

   for (i=0;i<n;i++){
      if (v[i] > mayor){
         mayor = v[i];
      }
   }
   return mayor;
}

/* Programe una funcion que reciba como parametros dos vectores de 
numeros enteros v1 y v2, y su longitud n (los vectores tienen igual
longitud), y devuelva 1 si v2 es el orden reverso de v1, y 0 si no. 
Ejemplo: 
Si v1 = {3,4,1} su reverso es v2 = {1,4,3}, y la funcion retorna 1.
 */
int reverso(int v1[], int v2[], int n){
   int i;
   for (i=0;i<n;i++){
      if (v1[i] != v2[n - 1 - i]) {
         return 0;
      }
   }
   return 1;
}

/* Programe una funcion que recibe un vector v de numeros enteros, 
y su longitud n, y devuelve 1 si esta ordenado (ya sea creciente o 
decrecientemente), y 0 si no.
Ejemplo:
{1,1,2} esta ordenado en forma ascendente y retorna 1.
{6,4} esta ordenado en forma descendente y retorna 1.
{1,3,2} esta desordenado y retorna 0.
*/
int ordenado(int v[], int n){
   int ascendente = 1;
   int descendente = 1; 
   int i;

   for (i=1;i<n;i++){
      if (v[i - 1] > v[i]){
         ascendente = 0; 
      }
      if (v[i - 1] < v[i]) {
            descendente = 0;
      }
   }
   return ascendente || descendente;
}

