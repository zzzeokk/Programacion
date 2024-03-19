#include <stdio.h>
#include <stdlib.h>

// 3) El sistema de boletos electrónicos de Metrópolis reúne la información de los pasajes vendidos,
//    por las distintas líneas de colectivos de la zona, para el mes de noviembre. 
//    En el archivo secuencial "Boletos.txt", cada boleto vendido se corresponde con un renglón del archivo que contiene:

// 	Boletos.txt
// 	sube_nro		entero (AGRUPADO)
// 	linea_nro		entero
// 	dia			    entero
// 	hora			entero
// 	minutos			entero
// 	importe_viaje   real

//    Aplicando corte de control, escribir una función que reciba el nombre del archivo
//    y muestre 2 listados por pantalla: uno con la cantidad de viajes y el total gastado por sube,
//    y otro con la cantidad de boletos vendidos por día.

void corteControl(char name) {
    FILE *fp;
    fp = fopen(name, "r");

    rewind(fp);

    int boletos_dia[29] = {0};
    int sube_nro, linea_nro, dia, hora, minutos;
    double importe_viaje;

    fscanf(fp, "%d %d %d %d %d %f", &sube_nro, &linea_nro, &dia, &hora, &minutos, &importe_viaje);

    while (!feof(fp)) {
        int cantidad_viajes = 0;
        double total = 0;
        int codigo_actual = sube_nro;
        while (!feof(fp) && sube_nro == codigo_actual) {
            cantidad_viajes++;
            total += importe_viaje;
            boletos_dia[dia-1]++;
            fscanf(fp, "%d %d %d %d %d %f", &sube_nro, &linea_nro, &dia, &hora, &minutos, &importe_viaje);
        }
        printf("Numero de sube: %d, Cantidad de viajes: %d, Total gastado: %.2f\n", codigo_actual, cantidad_viajes, total);
    }

    for (int i = 1; i <= 30; i++) {
        printf("Dia: %d, Cantidad de boletos vendidos: %d", i, boletos_dia[i]);
    }
    fclose(fp);
}