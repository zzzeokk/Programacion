#include <stdio.h>
#include <stdlib.h>

typedef struct rcolectivo {
 	int linea_nro;		       // NRO de línea de la empresa
 	char descripcion[40];	  // NOMBRE de la empresa
 	double saldo;		     // SALDO histórico de la empresa
} rcolectivo;


int function (int n, double p, char name) {
    FILE *fp;
    fp = fopen(name, "r+b");

    if (fp == NULL) {
        return -1;
    }

    // Buscar el registro con el número de empresa correspondiente
    fseek(fp, sizeof(rcolectivo)*n, SEEK_SET);
    
    // Leer el registro actual
    rcolectivo registro;
    fread(&registro, sizeof(rcolectivo), 1, fp);

    // Actualizar el saldo
    registro.saldo = p;

    // Volver a la posición del archivo y escribir el registro actualizado
    fseek(fp, (n - 1) * sizeof(rcolectivo), SEEK_SET);                          // fseek(fp, (n - 1) * sizeof(rcolectivo), SEEK_SET);
    fwrite(&registro, sizeof(rcolectivo), 1, fp);

    fclose(fp);

    return 0;
}