#include <stdio.h>
#include <stdlib.h>

// Programe una funcion que recibe los datos de un archivo de clima, y un mes, 
// y devuelva cuantos dias hubo sin lluvias en ese mes.

// - dia
// - mes
// - anio 
// - cantidad de lluvia caida 
// - temperatura minima
// - temperatura maxima

int sin_lluvias(char name) {
    FILE *fp;
    fp = fopen(name, "r");

    rewind(fp);

    int dia, mes, anio, cantidad_lluvia, tempMax, tempMin;

    fscanf(fp, "%d %d %d %d %d %d", &dia, &mes, &anio, &cantidad_lluvia, &tempMax, &tempMin);

    while(!feof(fp)) {
        int sinLluvias = 0;
        int codigo_actual = mes;
        while(!feof(fp) && mes == codigo_actual) {
            if (cantidad_lluvia == 0) {
                sinLluvias++;
            }
            fscanf(fp, "%d %d %d %d %d %d", &dia, &mes, &anio, &cantidad_lluvia, &tempMax, &tempMin);
        }
        printf("Mes: %d, Dias sin lluvia: %d", codigo_actual+1, sinLluvias);
    }
}