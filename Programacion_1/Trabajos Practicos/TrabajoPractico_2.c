#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX_STRING 30

// 1. Crear una función con cuatro parámetros (V, N, menor, mayor) que cargue un vector V
//    de longitud N con números enteros aleatorios comprendidos entre menor y mayor.  

void cargarVector(int v[], int n, int menor, int mayor) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = menor + rand() % (mayor - menor + 1);
    }
}

int main() {
    srand(time(NULL));

    int n = 10;
    int v[n];
    int menor = 1;
    int mayor = 100;

    cargarVector(v, n, menor, mayor);
        printf("Vector Cargado");
        for (int i = 0; i < n; i++) {
            printf("%d\n", v[i]);
        }
        printf("\n");
    
        return 0;
}

//  2. Dados dos vectores A y B de igual cantidad de elementos cargados con la función del punto 1, 
//     obtener el producto escalar: Σ A(i) * B(i). 

int productoEscalar(int A[], int B[], int N) {
    int producto = 0;
    for (int i = 0; i < N; i++) {
        producto += A[i] * B[i];
    }
    return producto;
}

int main() {
    srand(time(NULL)); // Numeros Aleatorios

    int n = 10;        // Longitud de los Vectores
    int A[n];          // Vector A
    int B[n];          // Vector B
    int menor = 1;     // Valor Minimo
    int mayor = 100;   // Valor Maximo

    // Cargando Vectores A y B con la anterior funcion cargarVector
    cargarVector(A, n, menor, mayor);
    cargarVector(B, n, menor, mayor);

    int resultado = productoEscalar(A, B, n); // Producto Escalar

    printf("Producto Escalar: %d\n", resultado); // Imprimiendo Resultado

    return 0;
}

// 3. Hacer una función que reciba dos vectores A y B de números enteros de n cantidad de elementos,
//    siendo n un número par, y retorne la suma de los elementos que ocupan las posiciones pares del primero 
//    con los elementos que ocupan las impares del segundo. Recuerde que en C las posiciones en los
//    arreglos se numeran desde el cero, y que el cero es un número par.

int sumatoriaDeElementos(int A[], int B[], int n){
    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            suma += A[i];
        } else {
            suma+= B[i];
        }
    }
    return suma;
}

int main() {
    int n = 6; // Cantidad de elementos en los vectores (debe ser par)
    int A[] = {1, 2, 3, 4, 5, 6}; // Primer vector A
    int B[] = {7, 8, 9, 10, 11, 12}; // Segundo vector B

    // Llamada a la función para obtener la suma
    int resultado = sumaElementosParesEImpares(A, B, n);

    // Imprimir el resultado
    printf("Resultado de la suma: %d\n", resultado);

    return 0;
}