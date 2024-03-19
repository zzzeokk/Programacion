#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX_STRING 30
#define F 3
#define C 3

// { [] < > \n }

// 1. Dada una matriz de 3 filas por 4 columnas, calcular la sumatoria de sus elementos:  ΣM(i,j)

int sumatoriaMatriz(int m[3][4]) {
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            suma += m[i][j];
        }
    }
    return suma;
}

// INPUT: int m[3][4]
// OUTPUT: suma (int)

int main() {
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int resultado = sumatoriaMatriz(matriz);

    // Imprime la sumatoria
    printf("La sumatoria de los elementos de la matriz es: %d\n", resultado);

    return 0;
}

// 2. Leer una matriz de tres filas por tres columnas y calcular la suma de cada una de sus filas y de sus columnas,
//    colocando los resultados en dos vectores, uno para la suma de las filas y otro para la suma de las columnas. 

void leerMatriz(int m[F][C]) {
    for (int i = 0; i < F; i++) {
        printf("\n");
        for (int j = 0; j < C; j++) {
            printf("%i", m[i][j]);
        }
    }
}

void sumatoriaFilas(int m[F][C], int sumaFilas[F]) {
    for (int i = 0; i < F; i++) {
        sumaFilas[i] = 0;
        for (int j = 0; j < C; j++) {
            sumaFilas[i] += m[i][j];
        }
    }
}

void sumatoriaColumnas(int m[F][C], int sumaColumnas[C]){
    for (int j = 0; j < C; j++) {
        sumaColumnas[j] = 0;
        for (int i = 0; i < F; i++) {
            sumaColumnas[j] += m[i][j];
        }
    }
}

int main(){
    int m[F][C] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sumaFilasV[F];
    int sumaColumnasV[C];

    leerMatriz(m);
    sumatoriaFilas(m, sumaFilasV);
    sumatoriaColumnas(m, sumaColumnasV);

    printf("Suma de Filas:\n");
    for (int i = 0; i < F; i++) {
        printf("%i", sumaFilasV[i]);
    }
    printf("\n");

    printf("Suma de Columnas:\n");
    for (int j = 0; j < C; j++) {
        printf("%i", sumaColumnasV[j]);
    }
    printf("\n");

    return 0;
}

// 3. Realizar un programa que, dada una matriz cuadrada con valores enteros entre 1 y 50 (al azar),
//    la muestra y se obtenga su traspuesta (permutación de filas y columnas, 
//    utilizando un procedimiento que permuta dos elementos), y la muestre nuevamente...

void cargaAleatoria(int m[F][C]){
    int numerosAleatorios;
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            numerosAleatorios = (rand() % 50 + 1);
            m[i][j] = numerosAleatorios;
        }
    }
}

void mostrarMatriz(int m[F][C]);

void matrizTraspuesta(int m[F][C]);