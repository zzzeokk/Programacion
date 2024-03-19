#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_STRING 30

// A. Realizar una función que calcule cuál, de los contenidos de un vector numérico, es el
//    elemento cuyo valor es el más cercano a un número dado. La función debe devolver el valor
//    del elemento. Por ejemplo, dado el vector (26,-3, 5, 6, 35), y el valor 1, el resultado de la
//    función debería ser -3 porque éste es el valor del elemento más cercano a 1.

int elemCercano(int vector[], int n, int numero) {
    if (n <= 0) {
        return -1;
    }

    int elementoMasCercano = vector[0];
    int distanciaMinima = abs(vector[0] - numero); 

    for (int i = 1; i < n; i++) {
        int distanciaActual = abs(vector[i] - numero);
        
        if (distanciaActual < distanciaMinima) {
            distanciaMinima = distanciaActual;
            elementoMasCercano = vector[i];
        }
    }

    return elementoMasCercano;
}

int main() {
    int vector[] = {26, -3, 5, 6, 35};
    int n = sizeof(vector) / sizeof(vector[0]);
    int numero = 1;

    int masCercano = elemCercano(vector, n, numero);
    
    printf("El elemento más cercano a %d es: %d\n", numero, masCercano);

    return 0;
}