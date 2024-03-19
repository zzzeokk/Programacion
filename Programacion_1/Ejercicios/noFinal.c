#include <stdio.h>
#include <stdlib.h>

// 1) Tengo un archivo de acceso directo "Colectivos.dat" cuyos datos se acceden mediante un registro:

typedef struct rcolectivo {
	int linea_nro;		      // número de línea de la empresa
	char descripcion[40];	  // nombre de la empresa
	double saldo;		      // saldo histórico de la empresa
} rcolectivo;

//    El valor del campo linea_nro se corresponde con la posición física del registro en el archivo.

//    Realizar una función que recibe el número de empresa y un valor en pesos y debe actualizar
//    el saldo correspondiente a esa empresa retornando 0 si la operación y -1 en caso contrario.

int function (int n, double p, char name) {
    FILE *fp;
    fp = fopen(name, "r+b");

    if (fp == NULL) {
        return -1;
    }

    fseek(fp, sizeof(rcolectivo)*n, SEEK_SET);
    rcolectivo registro;
    fread(&registro, sizeof(rcolectivo), 1, fp);
    registro.saldo = p;
    
    fseek(fp, sizeof(rcolectivo)*n, SEEK_CUR -1);
    fwrite(&registro, sizeof(rcolectivo), 1, fp);

    fclose(fp);
    return 0;
}

// 2) El sistema de boletos electrónicos de Metrópolis reúne la información de los pasajes vendidos,
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

void corteDeControl(char name) {
    FILE *fp;
    fp = fopen(name, "r");

    rewind(fp);

    int sube_nro, linea_nro, dia, hora, minutos;
    double importe_viaje;
    int boletos_dia[29] = {0};

    fscanf(fp, "%d %d %d %d %d %f", &sube_nro, &linea_nro, &dia, &hora, &minutos);

    while(!feof(fp)) {
        int cantidad_viajes = 0;
        double total = 0;
        int codigo_actual = sube_nro;
        while (!feof(fp) && sube_nro == codigo_actual) {
            cantidad_viajes++;
            total += importe_viaje;
            boletos_dia[dia+1]++;
            fscanf(fp, "%d %d %d %d %d %f", &sube_nro, &linea_nro, &dia, &hora, &minutos);
        }
        printf("Codigo de Sube: %d, Cantidad de viajes: %d, Total gastado: %.2f\n", codigo_actual, cantidad_viajes, total);   // Cantidad de viajes y total gastado por cada sube.
    }
    
    for (int i = 0; i <= 30; i++) {
        printf("Dia: %d, Cantidad de boletos vendidos: %d\n", i, boletos_dia[i]);
    }

    fclose(fp);
}

// 3) Se tiene un vector de registros con los siguientes datos de 100.000 alumnos:

typedef struct t_alumno {
    int legajo;
    char apellido[30];
    int nota1;
    int nota2;
} t_alumno;

// Escribir una funcion en C llamada "cuantos10" que reciba el vector de registros
// y retorne la cantidad de alumnos que se sacaron al menos un 10, ademas desde la
// funcion "cuantos10" se debe llamar a otra funcion llamada "condicion", a la cual
// le pasamos un registro y debe generar 1 archivo de texto que contenga en cada 
// renglon los siguientes datos (Legajo, promedio, condicion) Donde condicion 
// dependera de las notas y sera:
// ><
// "Promocionado" Si el promedio esta entre 7 y 10
// "Regular" Si el promedio esta entre 4 y 6.99
// "Libre" Si el promedio esta entre 0 y 3.99

void condicion(t_alumno alumno) {
    FILE *fp;
    fp = fopen("condiciones.txt", "a");

    float promedio = (alumno.nota1 + alumno.nota2) / 2;
    char condicion[20];

    if (promedio >= 7) {
        condicion == "Promocionado";
    } else if (promedio >= 4 && promedio < 7) {
        condicion == "Regular";
    } else {
        condicion == "Libre";
    }

    fprintf(fp, "%d %f %s", alumno.legajo, promedio, condicion);
    fclose(fp);
}

int cuantos10(t_alumno alumnos[]) {
    int alumnos10 = 0;

    for (int i = 0; i < 100000; i++) {
        if (alumnos[i].nota1 == 10 || alumnos[i].nota2 == 10) {
            alumnos10++;
            condicion(alumnos[i]);
        }
    }
    return alumnos10;
}

// 4) En el sistema de farmacia de un hospital publico, existe un archivo:
//    mensual de Movimientos (Texto) "mov_medi.txt", que se encuentra agrupado
//    por codigo de paciente, conteniendo informacion acerca de que medicamentos
//    se le receta a cada paciente y en que dosis.

// mov_medi.txt
//     cod_paciente         entero (AGRUPADO)
//     dia                  entero
//     cod_medicamento      entero (1 - 999)
//     dosis                entero      

// Aplicando al archivo mod_medi.txt la tecnica de corte de control, mostrar un listado que informe
// cuantas veces se le recetaron medicamentos a cada paciente durante el mes.

// IMPORTANTE //

// El archivo secuencial "mov_medi.txt" ya se encuentra cargado y debe ser leido una sola vez 
// en todo el programa dentro del corte de control.

void corteDeControl(char name) {
    FILE *fp;
    fp = fopen(name, "r");

    rewind(fp);

    int cod_paciente, dia, cod_medicamento, dosis;
    int vMes[30] = {0};

    fscanf(fp, "%d %d %d %d", &cod_paciente, &dia, &cod_medicamento, &dosis);

    while (!feof(fp)) {
        int contador_recetas = 0;
        int codigo_actual = cod_paciente;
        while (!feof(fp) && cod_paciente == codigo_actual) {
            contador_recetas++;
            fscanf(fp, "%d %d %d %d", &cod_paciente, &dia, &cod_medicamento, &dosis);
        }
        printf("Codigo de paciente: %d, Cantidad de medicamentos recetados: %d", codigo_actual, contador_recetas);
    }
    fclose(fp);
}

// 5) Dada una matriz de 3 filas por 4 columnas, calcular la sumatoria de sus elementos:  ΣM(i,j)

int sumatoriaMatriz(int m[3][4]) {
    int suma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            suma += m[i][j];
        }
    }
    printf("La sumatoria de los elementos es: %d", suma);
}

// 6) Leer una matriz de tres filas por tres columnas y calcular la suma de cada una de sus filas y de sus columnas,
//    colocando los resultados en dos vectores, uno para la suma de las filas y otro para la suma de las columnas.

void sumatoriaFilas(int m[3][3], int sumaFilas[3]) {
    for (int i = 0; i < 3; i++) {
        sumaFilas[i] = 0;
        for (int j = 0; j < 3; j++) {
            sumaFilas[i] += m[i][j];
        }
    }
}

void sumatoriaColumnas(int m[3][3], int sumaColumnas[3]){
    for (int j = 0; j < 3; j++) {
        sumaColumnas[j] = 0;
        for (int i = 0; i < 3; i++) {
            sumaColumnas[j] += m[i][j];
        }
    }
}

int main(){
    int m[3][3];
    int sumaFilasV[3];
    int sumaColumnasV[3];
    
    sumaFilas(m, sumaFilasV);
    sumaColumnas(m, sumaColumnasV);

    printf("Suma de filas:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", sumaFilasV[i]);
    }
    printf("\n");

    printf("Suma de columnas:\n");
    for (int j = 0; j < 3; j++) {
        printf("%d ", sumaColumnasV[j]);
    }
}

// 7)  Dada una matriz de 3 filas por 4 columnas, calcular el promedio de cada una de las filas.

int promedioMatriz(int m[3][4]) {
    for (int i = 0; i < 3; i++) {
        int sumaFilas = 0;
        for (int j = 0; j < 4; j++) {
            sumaFilas += m[i][j];
        }
        float promedio = sumaFilas / 4;
        printf("Promedio de la fila %d: %.2f\n", (i + 1), promedio);
    }
    return 0;
}

// 8) Programe una funcion que reciba una matriz de enteros, de m filas por n 
// columnas como entrada, un vector v de dimension m, y un vector w de 
// dimension n, y coloque la sumatoria de sus elementos de sus filas en
// el vector v, y la sumatoria de los elementos de sus columnas en w.

void suma_filas_col(int m, int n, int matriz[m][n], int v[m], int w[n]) { 
    for (int i = 0; i < m; i++) {
        v[i] = 0;
    }
    for (int j = 0; j < n; j++) {
        w[j] = 0;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            v[i] += matriz[i][j];
            w[j] += matriz[i][j];
        }
    }
}

// 9) Programe una funcion que reciba una matriz de enteros, de m filas por n 
// columnas como entrada, y retorne el minimo de los elementos de la matriz.

int minimo_elem_matriz(int m, int n, int matriz[m][n]) {
    int minimo = matriz[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
           }
        }
    }
    return minimo;
}