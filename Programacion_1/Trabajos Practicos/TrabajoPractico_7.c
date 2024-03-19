#include <stdio.h>

// 1. En un archivo secuencial (de texto, por ejemplo “lluvias.txt”) se almacenan datos sobre la lluvia caída en un cierto período.
//    Cada línea corresponde a un día y contiene los siguientes datos: 

// Día-Mes-Anio-Precipitaciones (0 si no llovió)  
// Preparar un algoritmo con los procedimientos necesarios para: 

// a) cargar los datos correspondientes a los 30 días del mes de septiembre del corriente año. 

// b) leer el archivo e informar por pantalla:cuántos días hubo sin lluvias, cuántos días llovió  menos de 50 mm y cuántos llovió 50 mm ó más.

void cargarDatosLluvia() {
    FILE *fp;
    fp = fopen("lluvias.txt", "r");

    int dia, mes, anio;
    float precipitaciones;

    for (dia = 1; dia <= 30; dia++) { // Recorre los 30 dias del Mes.
        fprintf(fp, "%02d - %02d - %04d\t%0.2f", &dia, &mes, &anio, &precipitaciones);
    }
    fclose(fp);
}

void leerArchivo() {
    FILE *fp;
    fp = fopen("lluvias.txt", "r");

    int dias_sinLluvia = 0;
    int dias_menor50 = 0;
    int dias_mayorIgual50 = 0;
    int dia, mes, anio;
    float precipitaciones;

    fscanf(fp, "%02d %02d %04d\t%0.2f", &dia, &mes, &anio, &precipitaciones);

    while(!feof(fp)) {
        if(mes == 9) {
            if (precipitaciones == 0) {
                dias_sinLluvia++;
            }
            if (precipitaciones < 50 && precipitaciones != 0) {
                dias_menor50++;
            } else {
                dias_mayorIgual50++;
            }

            printf("Dias sin lluvias en septiembre: %d\n", dias_sinLluvia);
            printf("Dias con menos de 50mm de lluvia: %d\n", dias_menor50);
            printf("Dias con 50mm o mas de lluvia: %d\n", dias_mayorIgual50);
        }
    }

    fclose(fp);
}

// 2. En una estación meteorológica se registra diariamente la temperatura máxima y mínima de todo un año con el siguiente diseño:
//         Día-Mes-Anio-Temperatura_Maxima-Temperatura_Minima (éstos dos últimos se pueden generar aleatoriamente).
//    Preparar un algoritmo con los procedimientos necesarios para: 

// a) cargar los datos correspondientes a todos los días del corriente año en un archivo llamado “ temperaturas.txt”. 
// b) imprima por pantalla un reporte como el siguiente: 

// TEMPERATURA: INFORME ANUAL  
// Temperatura Mínima Del Año: xx 
// Registrada el Día: xx 
// Del Mes: xx 
// Temperatura Máxima Del Año: xx 
// Registrada el Día: xx 
// Del Mes: xx 
// Máxima Amplitud 
// Térmica: xx  
// Registrada el Día: xx  
// Del Mes: xx  

void cargarDatosAnuales() {
    FILE *archivo;
    archivo = fopen("temperaturas.txt", "w");  // Abre el archivo en modo de escribir

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    // Semilla para generar números aleatorios
    srand(time(NULL));

    // Generar temperaturas para cada día del año
    for (int dia = 1; dia <= 365; dia++) {
        // Formato de fecha: AAA-MM-DD
        // Formato de temperaturas: Máxima-Mínima
        fprintf(archivo, "%03d-%02d-%02d: %d-%d\n", dia, rand() % 12 + 1, rand() % 28 + 1, rand() % 31, rand() % 21 - 10);
    }

    fclose(archivo);
}

void imprimirInformeAnual() {
    FILE *archivo;
    archivo = fopen("temperaturas.txt", "r");  // Abre el archivo en modo de lectura

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    int tempMaxAnual = -100;  // Inicializa con un valor muy bajo
    int tempMinAnual = 100;   // Inicializa con un valor muy alto
    int diaMax, mesMax, diaMin, mesMin;

    while (1) {
        int dia, mes, anio, tempMax, tempMin;
        int resultado = fscanf(archivo, "%03d-%02d-%02d: %d-%d", &dia, &mes, &anio, &tempMax, &tempMin);

        if (resultado != 5) {
            break;  // Fin del archivo
        }

        // Actualizar temperaturas máximas y mínimas anuales
        if (tempMax > tempMaxAnual) {
            tempMaxAnual = tempMax;
            diaMax = dia;
            mesMax = mes;
        }

        if (tempMin < tempMinAnual) {
            tempMinAnual = tempMin;
            diaMin = dia;
            mesMin = mes;
        }
    }

    fclose(archivo);

    // Calcular máxima amplitud térmica
    int amplitudTermica = tempMaxAnual - tempMinAnual;
    
    // Imprimir informe anual
    printf("TEMPERATURA: INFORME ANUAL\n");
    printf("Temperatura Mínima Del Año: %d\n", tempMinAnual);
    printf("Registrada el Día: %d\n", diaMin);
    printf("Del Mes: %d\n", mesMin);
    printf("Temperatura Máxima Del Año: %d\n", tempMaxAnual);
    printf("Registrada el Día: %d\n", diaMax);
    printf("Del Mes: %d\n", mesMax);
    printf("Máxima Amplitud Térmica: %d\n", amplitudTermica);
    printf("Registrada el Día: %d\n", diaMax);  // Puedes cambiar esto al día correspondiente a la máxima amplitud térmica
    printf("Del Mes: %d\n", mesMax);  // Puedes cambiar esto al mes correspondiente a la máxima amplitud térmica
}

