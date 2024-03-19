#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MAX_STRING 30

// { [] < > \n }

// 1. Dada una matriz de 3 filas por 4 columnas, calcular la sumatoria de sus elementos:  Σ M(i,j)

int const i = 100;
int const j = 100;

sumatoriaMatrices(int M[i][j], int cant_i, int cant_j) {
    int filas, columnas;
    int sumatoria = 0;

    for(filas = 0; filas < cant_i; filas++) {
        printf("\n");
        for(columnas = 0; columnas < cant_j; columnas++) {
            sumatoria += M[filas][columnas];
        }
    }
    printf("La sumatoria de los elementos de la matriz es: %i\n", sumatoria); // O tambien se puede usar: return sumatoria;
}

// 2. Leer una matriz de tres filas por tres columnas y calcular la suma de cada una de sus filas y de sus columnas,
//    colocando los resultados en dos vectores, uno para la suma de las filas y otro para la suma de las columnas. 

#define F 3        // Filas
#define C 3       // Columnas

// --- Modularizar el ejercicio en funciones: --- //

void leerMatriz(int m[F][C]);

void sumatoriaFilas(int m[F][C], int sumaFilas[F]);

void sumatoriaColumnas(int m[F][C], int sumaColumnas[C]);

// --- Entrada y Salida de las funciones: --- //
//
// leerMatriz: INPUT: int m[F][C]
//             OUTPUT: (void)
// sumatoriaFilas: INPUT: int m[F][C], int sumaFilas[i]
//                 OUTPUT: (void)
// sumatoriaColumnas: INPUT: int m[F][C], int sumaColumnas[j]
//                    OUTPUT: (void)

// --- Precondición y Postcondición: --- //
//
// leerMatriz: PRECOND: Ninguna precondición específica.
//             POSTCOND: La matriz m estará llena con números aleatorios entre 1 y 10.
// sumatoriaFilas: PRECOND: Ninguna precondición específica.
//                 POSTCOND: El arreglo sumaFilas[i] contendrá la suma de la filas de la matriz m y las almacenara en m[i][j]
// sumatoriaColumnas: PRECOND: Ninguna precondición específica.
//                    POSTCOND: El arreglo sumaColumnas[j] contendrá la suma de la columnas de la matriz m y las almacenara en m[i][j]

// --- Pseudocodigo: --- //
//
// Funcion leerMatriz(matriz):
//     IF (La fila esta en un rango de 0 a 2:)
//         IF (La columna esta en un rango de 0 a 2:)
//             numerosAleatorios = generarNumeroAleatorio(entre 1 y 10)
//             matriz[fila][columna] = numerosAleatorios
//
// Funcion sumatoriaFilas(matriz, sumaFilas):
//     IF (La fila esta en un rango de 0 a 2:)
//         suma = 0
//         IF (La columna esta en un rango de 0 a 2:)
//             suma = suma + matriz[fila][columna]
//         sumaFilas[fila] = suma
//
// Función sumatoriaColumnas(matriz, sumaColumnas):
//    IF (La columna esta en un rango de 0 a 2:)
//         suma = 0
//         IF (La fila esta en un rango de 0 a 2:)
//             suma = suma + matriz[fila][columna]
//         sumaColumnas[columna] = suma

// --- Código en lenguaje C: --- //

void leerMatriz(int m[F][C]){
    int numeros_aleatorios;
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < 3; j++) {
            numeros_aleatorios = (rand() % 10 + 1);
            m[i][j] = numeros_aleatorios;
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

void sumatoriaColumnas(int m[F][C], int sumaColumnas[C]) {
    for (int j = 0; j < C; j++) {
        sumaColumnas[j] = 0;
        for (int i = 0; i < F; i++) {
            sumaColumnas[j] += m[i][j];
        }
    }
}

int main() {
    int m[F][C];
    int sumaFilasV[F];
    int sumaColumnasV[C];

    // Calcular Resultados
    srand(time(NULL));
    leerMatriz(m);
    sumaFilas(m, sumaFilasV);
    sumaColumnas(m, sumaColumnasV);

    // Mostrar resultados
    printf("Suma de filas:\n");
    for (int i = 0; i < F; i++) {
        printf("%d ", sumaFilasV[i]);
    }
    printf("\n");

    printf("Suma de columnas:\n");
    for (int j = 0; j < C; j++) {
        printf("%d ", sumaColumnasV[j]);
    }
    printf("\n");

    return 0;
}

// 3. Realizar un programa que, dada una matriz cuadrada con valores enteros entre 1 y 50 (al azar),
//    la muestra y se obtenga su traspuesta (permutación de filas y columnas, 
//    utilizando un procedimiento que permuta dos elementos), y la muestre nuevamente...

// A. Modularizar el ejercicio en funciones

void cargaAleatoria(int m[F][C]);

void mostrarMatriz(int m[F][C]);

void matrizTraspuesta(int m[F][C]);

// B. Pseudocodigo

// Funcion leerMatriz(matriz):
//     IF (La fila esta en un rango de 0 a F:)                                // F = 3
//         IF (La columna esta en un rango de 0 a C:)                        // C = 3
//             numerosAleatorios = generarNumeroAleatorio(entre 1 y 50)
//             matriz[fila][columna] = numerosAleatorios

// Funcion mostrarMatriz(matriz):
//     IF (La fila esta en un rango de 0 a F:)                                // F = 3
//         Imprime una bajada de Linea                                       // ( "\n" )
//         IF (La columna esta en un rango de 0 a C:)                       // C = 3
//             Imprime la matriz

// Funcion matrizTraspuesta(matriz):
//     IF (La fila esta en un rango de 0 a F:)                                // F = 3
//         IF (La columna esta en un rango de 0 a C:)                        // C = 3
//             Variable temporal = matriz[fila][columna]                    // Se declara la variable temp
//             matriz[fila][columna] = matriz[columna][fila]
//             matriz[columna][fila] = Variable temporal

// C. Codigo en C

void cargaAleatoria(int m[F][C]) {
    int numerosAleatorios;
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            numerosAleatorios = (rand() % 50 + 1);
            m[i][j] = numerosAleatorios;
        }
    }
}

void mostrarMatriz(int m[F][C]) {
    for (int i = 0; i < F; i++) {
        printf("\n");
        for (int j = 0; j < C; j++) {
            printf("%i", m[i][j]);
        }
    }
}

void matrizTraspuesta(int m[F][C]) {
    for (int i = 0; i < F; i++) {
        for (int j = i + 1; j < C; j++) {
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }
}

int main() {
    srand(time(NULL));
    int m[F][C];

    printf("Matriz original:\n");
    cargaAleatoria(m);
    mostrarMatriz(m);

    printf("Matriz Traspuesta:\n");
    matrizTraspuesta(m);
    mostrarMatriz(m);

    return 0;
}

// 4. Realizar un programa que permita generar aleatoriamente las temperaturas mínimas y máximas correspondientes a los 30 días de un mes. 
//    Calcular y mostrar:

//    Promedio de temperaturas en el mes.
//    Día de máxima temperatura con su correspondiente temperatura.
//    Día de mínima temperatura con su correspondiente temperatura.

// A. Modularizar el ejercicio:

void generarTemperaturas(int temperaturas_min[], int temperaturas_max[]);
double calcularPromedio(int temperaturas_min[], int temperaturas_max[]);
void encontrarExtremos(int temperaturas_min[], int temperaturas_max[], int *dia_max_temp, int *max_temp, int *dia_min_temp, int *min_temp);

// B. Pseudocodigo:

// Funcion generarTemperaturas(temperaturasMinimas, temperaturasMaximas):
//     IF (El indice esta en un rango de 0 a 30 dias)
//         temperaturasMinimas[i] = generarTemperaturasAleatorias(Entre 0 y 15 grados)
//         temperaturasMaximas[i] = generarTemperaturasAleatorias(Entre 16 y 32 grados)


// Funcion calcularPromedio(temperaturasMinimas, temperaturasMaximas):
//     suma = 0
//     IF (El indice esta en un rango de 0 a 30 dias)
//         suma = suma + temperaturasMinimas + temperaturasMaximas
//
//     Promedio = (en decimales)suma / (2 * dias)
//     Retorna el promedio

// Funcion encontrarExtremos(temperaturasMinimas, temperaturasMaximas, diaDeMaximaTemperatura, diaDeMinimaTemperatura, maximaTemperatura, minimaTemperatura)
//     maximaTemperatura = temperaturasMaximas[Primer Dia]
//     diaDeMaximaTemperatura = 0
//     minimaTemperatura = temperaturasMinimas[Primer Dia]
//     diaDeMinimaTemperatura = 0
//
//     IF (El indice esta en un rango de 0 a 30 dias)
//         ELIF (temperaturasMaximas[dia] >  maximaTemperatura)
//             maximaTemperatura = temperaturasMaximas[dia]
//             diaDeMaximaTemperatura = dia + 1 
//         ELIF (temperaturasMinimas[dia] >  minimaTemperatura)
//             minimaTemperatura = temperaturasMinima[dia]
//             diaDeMinimaTemperatura = dia + 1

// C. Codigo en C:

int const dias = 30;

void generarTemperaturas(int temperaturas_min[], int temperaturas_max[]) {
    for (int i = 0; i < dias; i++) {
        temperaturas_min[i] = rand() % 15 + 1; // Temperaturas mínimas entre 0 y 15 grados
        temperaturas_max[i] = ((rand() % 15 + 1) + 16); // Temperaturas máximas entre 16 y 32 grados
    }
}

double calcularPromedio(int temperaturas_min[], int temperaturas_max[]) {
    int suma = 0;
    int promedio;
    for (int i = 0; i < dias; i++) {
        suma += (temperaturas_min[i] + temperaturas_max[i]);
    }
    promedio = (double)suma / (2 * dias); // 2 temperaturas x dia = 2 * 30
    return promedio;
}

void encontrarExtremos(int temperaturas_min[], int temperaturas_max[], int *dia_max_temp, int *dia_min_temp, int *max_temp,  int *min_temp) {
    *max_temp = temperaturas_max[0];
    *dia_max_temp = 0;
    *min_temp = temperaturas_min[0]; 
    *dia_min_temp = 0;

    for (int i = 0; i < dias; i++) {
        if (temperaturas_max[i] > *max_temp) {
            *max_temp = temperaturas_max[i];
            *dia_max_temp = i + 1;
        }
        if (temperaturas_min[i] < *min_temp) {
            *min_temp = temperaturas_min[i];
            *dia_min_temp = i + 1;
        }
    }
}

int main() {
    int temperaturas_min[dias];
    int temperaturas_max[dias];

    srand(time(NULL));

    generarTemperaturas(temperaturas_min, temperaturas_max);

    double promedio = calcularPromedio(temperaturas_min, temperaturas_max);

    int dia_max_temp, max_temp, dia_min_temp, min_temp;
    encontrarExtremos(temperaturas_min, temperaturas_max, &dia_max_temp, &max_temp, &dia_min_temp, &min_temp);

    printf("Promedio de temperaturas en el mes: %.2lf grados\n", promedio);
    printf("El día de máxima temperatura fue el día %d con %d grados\n", dia_max_temp, max_temp);
    printf("El día de mínima temperatura fue el día %d con %d grados\n", dia_min_temp, min_temp);

    return 0;
}

// 5. Realizar un programa que genere una matriz de 20 filas por 3 columnas donde la primera columna almacena el nombre,
//    la segunda el apellido y la tercera el DNI. Luego dado un DNI, recorra la matriz, y si lo encuentra,
//    muestre el nombre y apellido correspondientes. Sino, debe mostrar mensaje de error.

# define FILAS 20
# define COLUMNAS 3

void ingresarPersonas(char m[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        printf("Ingrese los datos de la persona %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", m[i][0]);
        printf("Apellido: ");
        scanf("%s", m[i][1]);
        printf("DNI: ");
        scanf("%s", m[i][2]);
    }
}

bool buscarDNI(char m[FILAS][COLUMNAS], char dni) {
    bool encontrado = false;
    printf("Ingrese el DNI que necesita buscar: ");
    scanf("%c", dni);
    for (int i = 0; i < FILAS && !encontrado; i++) {
        if (m[i][2] == dni) {
            printf("Nombre: %s\n", m[i][0]);
            printf("Apellido: %s\n", m[i][1]);
            encontrado = true;
        }
    }
    if (!encontrado) {
        printf("ERROR - DNI no encontrado.\n");
    }
}

// 6. En un arreglo M(3, 4, 20) donde el primer índice señala número de centro de estudios, el segundo el número de  curso 
//    y el tercero el número alumno, se almacenan en cada celda, las notas de los alumnos.  Se solicita:

//    La nota media por curso.
//    La nota media por centro.
//    La nota media general. 
//    La posición del mejor alumno de cada curso con su correspondiente nota. 
