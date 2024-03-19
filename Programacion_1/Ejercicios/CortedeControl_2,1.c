#include <stdio.h>
#include <stdlib.h>

void MayorVentas(int meses[]) {
    int mes_mayorVentas = 0;
    int numero_mes = 0;

    for (int i = 0; i < 12; i++) {
        if (meses[i] > mes_mayorVentas) {
            mes_mayorVentas = meses[i];
            numero_mes = i + 1;
        }
    }
    return mes_mayorVentas, numero_mes;
}

void listado_stockFinal(int TIPO_MOVI, int CANTI_MOVI) {
    int stockFinal;
    int CANTI_COMPRAS = 0;
    int CANTI_VENTAS = 0;
    // int oldCODI_REP_MOVI = CODI_REP_MOVI;

    // while (CODI_REP_MOVI == oldCODI_REP_MOVI) {
    if (TIPO_MOVI == 1) {
        CANTI_COMPRAS += CANTI_MOVI;
    } else if (TIPO_MOVI == 2) {
        CANTI_VENTAS += CANTI_MOVI; 
    }
}


corteDeControl(char name[]) {
    FILE *fp;
    fp = fopen("MOVIMIENTOS.TXT", "r");
    int flag = 0;
    int codigo, dia, mes, anio, tipo, cantidad;
}