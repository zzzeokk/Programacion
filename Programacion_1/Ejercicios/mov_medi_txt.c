#include <stdio.h>
#include <stdlib.h>

// 1. Cuantas iteraciones como maximo, se deben realizar para buscar un valor en un vector de 456
//    elementos si se utiliza busqueda lineal y cuantas si esta ordenado y utilizamos busqueda binaria

// Se deben realizar 456 iteraciones como maximo si se utiliza busqueda lineal, y 9 iteraciones si utilizamos binaria

// 456 a 228 a 114 a 57 a 29 a 14 a 7 a 4 a 2 a 1
//        1     2    3    4    5    6   7   8   9

// 2. En el sistema de farmacia de un hospital publico, existe un archivo:
//    mensual de Movimientos (Texto) "mov_medi.txt", que se encuentra agrupado
//    por codigo de paciente, conteniendo informacion acerca de que medicamentos
//    se le receta a cada paciente y en que dosis.

// mov_medi.txt
//     cod_paciente         entero
//     dia                  entero
//     cod_medicamento      entero (1 - 999)
//     dosis                entero      

// Aplicando al archivo mod_medi.txt la tecnica de corte de control, mostrar un listado que informe
// cuantas veces se le recetaron medicamentos a cada paciente durante el mes.

// IMPORTANTE //

// El archivo secuencial "mov_medi.txt" ya se encuentra cargado y debe ser leido una sola vez 
// en todo el programa dentro del corte de control.

void medi_txt(char name) {
    FILE *fp;
    fp = fopen(name, "r");

    rewind(fp);

    int cod_paciente, dia, cod_medicamento, dosis;
    int vMes[30] = {0};
    
    fscanf(fp, "%d %d %d %d", &cod_paciente, &dia, &cod_medicamento, &dosis);

    while(!feof(fp)) {
        int contador_recetas = 0;
        int codigo_actual = cod_paciente;
        while(!feof(fp) && cod_paciente == codigo_actual) {
            contador_recetas++;
            fscanf(fp, "%d %d %d %d", &cod_paciente, &dia, &cod_medicamento, &dosis);
        }
        printf("Paciente: %d, Recetas Medicadas: %d", codigo_actual, contador_recetas);
    }
    fclose(fp);
}

int main() {
    FILE *fp;
    fp = fopen("mov_medi.txt", "r");

    rewind(fp);
    medi_txt(fp);
    
    fclose(fp);
    return 0;
}

