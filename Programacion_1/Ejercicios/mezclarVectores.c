#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_STRING 30

// C. Generar un algoritmo que en base a dos vectores ordenados de tamaños posiblemente
// distintos, genere un tercer vector con los elementos de ambos vectores, también ordenados,
// pero que solo contenga las posiciones impares de ambos. Si uno de los vectores termina
// antes, el vector resultante llevará las posiciones impares del vector sobrante. Ejemplo A = [1,
// 2 , 6, 7] ; B = [3, 4] ; Res = [2, 4, 7] (La posicion 0 se considera par)

#define N 5
#define M 8

int mezclaOrdenada(int vector1[], int cantVector1, int vector2[], int cantVector2, int vectorc[]) {
    int v1 = 0; //Esto para indexar cada vector
    int v2 = 0;
    int vc = 0;

    while (v1 < cantVector1 && v2 < cantVector2) { // Hago las comparaciones 
        if (vector1[v1] < vector2[v2]) {
            vectorc[vc] = vector1[v1];
            vc++;
            v1++;
        } else if (vector1[v1] > vector2[v2]) {
            vectorc[vc] = vector2[v2];
            vc++;
            v2++;
        } else {
            vectorc[vc] = vector1[v1];
            vc++;
            v1++;
            v2++;
        }
    }
// me fijo cual no esta lleno
    while (v1 < cantVector1) {
        vectorc[vc] = vector1[v1];
        vc++;
        v1++;
    }

    while (v2 < cantVector2) {
        vectorc[vc] = vector2[v2];
        vc++;
        v2++;
    }

    return vc;
}

void mostrarVector(int vector[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int vector1[N] = {1, 3, 5, 7, 8};
    int vector2[M] = {2, 3, 4, 5, 6, 7, 8, 9};
    int vectorObjetivo[N + M];
    int vc = mezclaOrdenada(vector1, N, vector2, M, vectorObjetivo);
    mostrarVector(vectorObjetivo, vc);
    return 0;
}