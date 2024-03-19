#include <stdio.h>
#include <stdlib.h>

// 3. Se tiene un vector de registros con los siguientes datos de 100.000 alumnos:

//    Legajo    Entero
//    Apellido  String[30]
//    Nota1     Entero
//    Nota2     Entero

// Escribir una funcion en C llamada "cuantos10" que reciba el vector de registros
// y retorne la cantidad de alumnos que se sacaron al menos un 10, ademas desde la
// funcion "cuantos10" se debe llamar a otra funcion llamada "condicion", a la cual
// le pasamos un registro y debe generar 1 archivo de texto que contenga en cada 
// renglon los siguientes datos (Legajo, promedio, condicion) Donde condicion 
// dependera de las notas y sera:

// "Promocionado" Si el promedio esta entre 7 y 10
// "Regular" Si el promedio esta entre 4 y 6.99
// "Libre" Si el promedio esta entre 0 y 3.99

typedef struct {
    int legajo;
    char apellido[30];
    int nota1;
    int nota2;
} t_alumno;

void condicion(t_alumno alumno) {
    FILE *fp;
    fp = fopen("condiciones.txt", "a");

    float promedio = (alumno.nota1 + alumno.nota2) / 2;
    char condicion[20];

    if (promedio >= 7) {
        condicion == "Promocionado";
    } else if (promedio < 7 && promedio >= 4) {
        condicion == "Regular";
    } else {
        condicion == "Libre";
    }
    fprintf(fp, "%i %f %s\n", alumno.legajo, promedio, condicion);

    fclose(fp);
}

int cuantos10(t_alumno alumnos[]) {
    int alumnos10 = 0;
    for(int i = 0; i < 100000; i++) {
        if (alumnos[i].nota1 == 10 || alumnos[i].nota2 == 10) {
            alumnos10++;
            condicion(alumnos[i]);
        }
    }
    return alumnos10;
}