#include <stdio.h>
#include <stdlib.h>

// Programe una funcion que recibe los datos de un archivo de clima, y devuelva cuantos dias 
// llovio menos de x mm, y cuantos dias llovio x mm o mas que x mm, en el año.

void llovio_umbral(char name, int x) {
    FILE *fp;
    fp = fopen(name, "r");

    rewind(fp);

    int dia, mes, anio, cantidad_lluvia, tempMin, tempMax;

    fscanf(fp, "%d %d %d %d %d %d", &dia, &mes, &anio, &cantidad_lluvia, &tempMax, &tempMin);

    while(!feof(fp)) {
        int lluvias_mayorigual_x;
        int lluvias_menor_x;
        int codigo_actual = anio;
        while(!feof(fp) && anio == codigo_actual) {
            if (cantidad_lluvia >= x) {
			    lluvias_mayorigual_x++;
		    } else {
			    lluvias_menor_x++;
		    }
            fscanf(fp, "%d\t%d\t%d\t%d\t%d\t%d",&dia, &mes, &anio, &cantidad_lluvia, &tempMin, &tempMax);
        }
        printf("Año: %d, Llovio menos de lo esperado %d veces, y Llovio lo esperado o mas %d veces", codigo_actual+1, lluvias_menor_x, lluvias_mayorigual_x);
    }
    fclose(fp);
}