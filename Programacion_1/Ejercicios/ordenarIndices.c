#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_STRING 30

// B. Se tienen tres (3) vectores de igual cantidad de elementos. En el vector "Apellido" están los
// apellidos de los pacientes, en el vector "Nombres" están los nombres de los mismos y en el
// vector Edad está la edad que tienen en este momento. Se pide :
// 1. Mostrar los apellidos y nombres de todos aquellos alumnos cuya edad es superior o igual a 33.
// 2. Ordenar los vectores por edad de mayor a menor (teniendo en cuenta de no desaparear los vectores).

void mostrarInfo(char apellidos[], char nombres[], int edad[], int cant_pacientes) {
    printf("Pacientes con edad igual o superior a 33 años:\n");
    for (int i = 0; i < cant_pacientes; i++) {
        if (edad[i] >= 33) {
            printf("%c, %c\n", apellidos[i], nombres[i]);
        }
    }

}

void ordenarIndices(int edad[], int indices[], int cant_pacientes) {
    for (int i = 0; i < cant_pacientes - 1; i++) {
        int edadMax = i;
        for (int j = i + 1; j < cant_pacientes; j++) {
            if (edad[indices[j]] > edad[indices[edadMax]]) {
                edadMax = j;
            }
        }
        int temp = indices[i];
        indices[i] = indices[edadMax];
        indices[edadMax] = temp;
    }
}

int main() {
    char Apellidos[][50] = {"López", "González", "Martínez", "Rodríguez", "Pérez"};
    char Nombres[][50] = {"Juan", "María", "Carlos", "Ana", "Pedro"};
    int Edad[] = {45, 32, 38, 29, 41};
    int numPacientes = sizeof(Edad) / sizeof(Edad[0]);

    mostrarPacientesMayores(Edad, Apellidos, Nombres, numPacientes);

    int indices[numPacientes];
    for (int i = 0; i < numPacientes; i++) {
        indices[i] = i;
    }

    ordenarIndicesPorEdad(Edad, indices, numPacientes);

    printf("\nVectores ordenados por edad de mayor a menor:\n");
    for (int i = 0; i < numPacientes; i++) {
        int idx = indices[i];
        printf("%s, %s (%d años)\n", Apellidos[idx], Nombres[idx], Edad[idx]);
    }

    return 0;
}