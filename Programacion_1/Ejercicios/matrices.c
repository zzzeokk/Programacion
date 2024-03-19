#include <stdio.h>
#include <stdlib.h>

// 5) Dada una matriz de 3 filas por 4 columnas, calcular la sumatoria de sus elementos:  ΣM(i,j)

int sumatoriaMatriz(int m[3][4]) {
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            suma += m[i][j];
        }
    }
}

// 6) Leer una matriz de tres filas por tres columnas y calcular la suma de cada una de sus filas y de sus columnas,
//    colocando los resultados en dos vectores, uno para la suma de las filas y otro para la suma de las columnas.

int sumatoriaFilas(int m[3][3], int sumaFilas[3]) {
    for (int i = 0; i < 3; i++) {
        sumaFilas[i] = 0;
        for (int j = 0; j < 4; j++) {
            sumaFilas[i] += m[i][j];
        }
    }
}

int sumatoriaColumnas(int m[3][3], int sumaColumnas[3]){
    for (int j = 0; j < 3; j++) {
        sumaColumnas[j] = 0;
        for (int i = 0; i < 3; i++) {
            sumaColumnas[j] += m[i][j];
        }
    }
}
// 7)  Dada una matriz de 3 filas por 4 columnas, calcular el promedio de cada una de las filas.

int promedioMatriz(int m[3][4]) {
    for (int i = 0; i < 3; i++) {
        int sumaFilas = 0;
        for (int j = 0; j < 3; j++) {
            sumaFilas += m[i][j];
        }
        float promedio = sumaFilas / 4;
        printf("Promedio de la fila %d: %.2f", i+1, promedio);
    }
    return 0;
}

// 8) Programe una funcion que reciba una matriz de enteros, de m filas por n 
// columnas como entrada, un vector v de dimension m, y un vector w de 
// dimension n, y coloque la sumatoria de sus elementos de sus filas en
// el vector v, y la sumatoria de los elementos de sus columnas en w.

void suma_filas_col(int m, int n, int matriz[m][n], int v[m], int w[n]) { 
    for (int i = 0; i < m; i++) {
        v[i] = 0;
    }

    for (int j = 0; j < n; j++) {
        w[j] = 0;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            v[i] += matriz[i][j];
            w[j] += matriz[i][j];
        }
    }
}

// 9) Programe una funcion que reciba una matriz de enteros, de m filas por n 
// columnas como entrada, y retorne el minimo de los elementos de la matriz.

int minimo_elem_matriz(int m, int n, int matriz[m][n]) {
    int minimo = matriz[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }        
    }
    return minimo;
}