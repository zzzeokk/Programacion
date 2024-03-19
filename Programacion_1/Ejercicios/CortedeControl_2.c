#include <stdio.h>
#include <stdlib.h>

/// 2) Dado el siguiente requerimiento:
// Una empresa de repuestos tiene su sistema de stock organizado de la siguiente forma:
// En un archivo secuencial “MOVIMIENTOS.TXT” agrupado por código de repuesto, todos
// los movimientos del año, con la siguiente estructura.

// MOVIMIENTOS.TXT
// CODI_REP_MOVI Código del repuesto (entero) (Agrupado)
// DIA_MOVI Día del movimiento (entero)
// MES_MOVI Mes del movimiento (entero)
// ANI_MOVI Año del movimiento (entero)
// TIPO_MOVI Tipo de movimiento (entero. 1: Compra 2: Venta)
// CANTI_MOVI Cantidad que se compraron o vendieron (entero)

// Considerar que el archivo ya está creado y almacenado en disco con todos los datos.

// Realizar un programa en “C” completo y modularizado que:

// 1) Informe por pantalla un listado con el stock final de cada Repuesto (Comprados - Vendidos).
//  2) Determine en qué mes se vendió mayor cantidad de repuestos.
//  3) Informe por pantalla cuál es el repuesto con mayor stock.
 
void listadoVentas(int *stockFinal, int TIPO_MOVI, int CANTI_MOVI, int v[], int MES_MOVI) {
    if (TIPO_MOVI == 1) {
        *stockFinal += CANTI_MOVI;
    } else if (TIPO_MOVI == 2) {
        *stockFinal -= CANTI_MOVI;
        v[MES_MOVI-1] += CANTI_MOVI;
    }
}

void stockMayor(int stockInput, int inputCode, int *mayorStock, int *mayorStockCode) {  
    if (stockInput > *mayorStock) {            // Si A > B
        *mayorStock = stockInput;              //    B = A
        *mayorStockCode = inputCode-1;
    }
}

int mes_cantidadVentas(int meses[]) {
    int mesMasVendido = 0;
    for (int mes = 1; mes <= 12; mes++) {
        if (meses[mes] > meses[mesMasVendido]) {
            mesMasVendido = mes;
        }
    }
    return mesMasVendido + 1;
}

void corteDeControl(char name[]) {
    FILE *fp;
    fp = fopen(name, "r");

    int vMes[12] = {0};
    int codigo, dia, mes, anio, tipo, cantidad;
    int mayorStock = 0, mayorStockCode = 0, actualCode;

    fscanf(fp, " %i %i %i %i %i %i", &codigo, &dia, &mes, &anio, &tipo, &cantidad);

    while(!feof(fp)) {                    // Corte de control (Doble While)
        int stockFinal = 0;               
        actualCode = codigo;              

        while (codigo == actualCode && !feof(fp)) {                       // WHILE (Hasta alcanzar el final del archivo)
            listadoVentas(&stockFinal, tipo, cantidad, vMes, mes);
            fscanf(fp, " %i %i %i %i %i %i", &codigo, &dia, &mes, &anio, &tipo, &cantidad);
        }

        stockMayor(stockFinal, codigo, &mayorStock, &mayorStockCode);
        printf("\nStock Final: %i, Repuesto: %i", stockFinal, actualCode);
    }
    printf("\nEl producto con mas Stock es: %i, con la cantidad de: %i", mayorStockCode, mayorStock);
    int mesMasVendido = mes_cantidadVentas(vMes);
    printf("\nEl mes con mas ventas es el mes numero: %i", mesMasVendido);
}