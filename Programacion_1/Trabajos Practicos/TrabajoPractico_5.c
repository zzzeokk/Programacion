#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 1. Escribir un procedimiento que almacene en un arreglo de registros los datos de 10 alumnos, conteniendo su legajo 
//    (generado automáticamente de 100 en 100, comenzando con legajo = 1, para que quede ordenado),
//    nombre, apellido y las calificaciones de los 3 exámenes parciales de una asignatura.  
//    Calcular el promedio de cada uno y mostrar el listado de alumnos junto con un mensaje de Promovido si el alumno supera o iguala el promedio de 7,
//    Regular si resulta entre 4 y 7 y Libre en caso que la nota media no alcance el 4.

typedef struct {
    int legajo;
    char nombre[50];
    char apellido[50];
    int notas[3];
    int promedio;
} t_alumno;

void cargarDatosAlumnos(t_alumno alumnos[], int cantidad) {
    int legajo = 1;

    for (int i = 0; i < cantidad; i++) {
        alumnos[i].legajo = legajo;
        printf("Ingrese el nombre del alumno %d: ", legajo);
        scanf("%s", alumnos[i].nombre);
        printf("Ingrese el apellido del alumno %d: ", legajo);
        scanf("%s", alumnos[i].apellido);

        printf("Ingrese la nota del primer parcial: ");
        scanf("%d", &alumnos[i].notas[0]);
        printf("Ingrese la nota del segundo parcial: ");
        scanf("%d", &alumnos[i].notas[1]);
        printf("Ingrese la nota del tercer parcial: ");
        scanf("%d", &alumnos[i].notas[2]);

        legajo += 100;
    }
}

void calcularPromedio(t_alumno *alumnos, int n) {
    for (int i = 0; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += alumnos[i].notas[j];
        }
        alumnos[i].promedio = suma / 3;
    }
}

void mostrarListado(t_alumno *alumnos, int n) {
    printf("\nListado de Alumnos:\n");
    for (int i = 0; i < n; i++) {
        printf("Legajo: %d, Nombre: %s %s, Promedio: %d, Estado: ", alumnos[i].legajo, alumnos[i].nombre, alumnos[i].apellido, alumnos[i].promedio);

        if (alumnos[i].promedio >= 7) {
            printf("Promovido\n");
        } else if (alumnos[i].promedio >= 4) {
            printf("Regular\n");
        } else {
            printf("Libre\n");
        }
    }
}

int main() {
    t_alumno alumnos[10];

    cargarDatosAlumnos(alumnos, 10);
    calcularPromedio(alumnos, 10);
    mostrarListado(alumnos, 10);

    return 0;
}


// 2. Hacer un programa que almacene en un arreglo de registros la siguiente información de N trabajadores:
//    nombre, edad, sexo (F o M), estado civil(S(soltero), C(casado), D(divorciado) y O(otro)) y salario base.  
//    Calcular y mostrar por pantalla la cantidad de trabajadores del sexo masculino, la cantidad de trabajadoras casadas,
//    el nombre del/a empleado/a más joven y la suma de todos los salarios.

typedef struct {
    char nombre[50];
    int edad;
    char sexo;  // 'M' para masculino, 'F' para femenino
    char estadoCivil;  // 'S' para soltero, 'C' para casado, 'D' para divorciado, 'O' para otro
    float salarioBase;
} t_trabajador;

void almacenarInformacion(t_trabajador empleados[], int N) {
    for (int i = 0; i < N; i++) {
        printf("Ingrese el nombre del trabajador %d: ", i + 1);
        scanf("%s", empleados[i].nombre);
        printf("Ingrese la edad del trabajador %d: ", i + 1);
        scanf("%d", &empleados[i].edad);
        printf("Ingrese el sexo del trabajador %d (M/F): ", i + 1);
        scanf(" %c", &empleados[i].sexo);
        printf("Ingrese el estado civil del trabajador %d (S/C/D/O): ", i + 1);
        scanf(" %c", &empleados[i].estadoCivil);
        printf("Ingrese el salario base del trabajador %d: ", i + 1);
        scanf("%f", &empleados[i].salarioBase);
    }
}

void calcularResultados(t_trabajador empleados[], int N) {
    int contadorMasculino = 0;
    int contadorCasadas = 0;
    t_trabajador empleadoMasJoven;
    empleadoMasJoven.edad = 999;  // Inicializar con una edad alta
    float sumaSalarios = 0;

    for (int i = 0; i < N; i++) {
        if (empleados[i].sexo == 'M') {
            contadorMasculino++;
        }

        if (empleados[i].sexo == 'F' && empleados[i].estadoCivil == 'C') {
            contadorCasadas++;
        }

        if (empleados[i].edad < empleadoMasJoven.edad) {
            empleadoMasJoven = empleados[i];
        }

        sumaSalarios += empleados[i].salarioBase;
    }

    // Mostrar resultados
    printf("\nResultados:\n");
    printf("Cantidad de trabajadores de sexo masculino: %d\n", contadorMasculino);
    printf("Cantidad de trabajadoras casadas: %d\n", contadorCasadas);
    printf("Empleado/a más joven: %s\n", empleadoMasJoven.nombre);
    printf("Suma total de salarios: $%.2f\n", sumaSalarios);
}

int main() {
    int N;
    printf("Ingrese la cantidad de trabajadores: ");
    scanf("%d", &N);

    t_trabajador empleados[N];

    almacenarInformacion(empleados, N);
    calcularResultados(empleados, N);

    return 0;
}

// 3. En un colegio de primaria, una clase tiene un nivel, un profesor y contiene 20 estudiantes.
//    Cada estudiante tiene un nombre, apellido, una fecha de nacimiento y tendrá diez notas en el año.
//    Hay cinco clases. Proporcione las estructuras de los registros clase y estudiantes.
//    Escriba un algoritmo que muestre para cada clase, la lista de los estudiantes y sus diez notas asociadas.

typedef struct {
    int dia;
    int mes;
    int anio;
} t_fecha;

typedef struct {
    char nombre[20];
    char apellido[20];
    t_fecha fechaNacimiento;
    float notas[10];
} t_estudiante;

typedef struct {
    int nivel;
    char profesor[20];
    t_estudiante estudiantes[20];
} t_clase;

void inicializarDatos(t_clase *clase, int nivel) {
    clase->nivel = nivel;
    sprintf(clase->profesor, "Profesor%d", nivel);

    // Inicializar información para cada estudiante de la clase
    for (int j = 0; j < 20; j++) {
        sprintf(clase->estudiantes[j].nombre, "Estudiante%d", j + 1);
        sprintf(clase->estudiantes[j].apellido, "Apellido%d", j + 1);
        clase->estudiantes[j].fechaNacimiento.dia = 1;
        clase->estudiantes[j].fechaNacimiento.mes = 1;
        clase->estudiantes[j].fechaNacimiento.anio = 2000 + j + 1;

        // Inicializar notas para cada estudiante
        for (int k = 0; k < 10; k++) {
            clase->estudiantes[j].notas[k] = 5.0 + (float)(rand() % 6);  // Notas aleatorias entre 5.0 y 10.0
        }
    }
}

void mostrarInformacionClase(t_clase *clase) {
    printf("Clase %d - Profesor: %s\n", clase->nivel, clase->profesor);
    printf("------------------------------------------------\n");

    for (int j = 0; j < 20; j++) {
        printf("Estudiante: %s %s - Fecha de Nacimiento: %d/%d/%d\n", 
               clase->estudiantes[j].nombre, 
               clase->estudiantes[j].apellido,
               clase->estudiantes[j].fechaNacimiento.dia,
               clase->estudiantes[j].fechaNacimiento.mes,
               clase->estudiantes[j].fechaNacimiento.anio);

        printf("Notas: ");
        for (int k = 0; k < 10; k++) {
            printf("%.2f ", clase->estudiantes[j].notas[k]);
        }
        printf("\n\n");
    }

    printf("------------------------------------------------\n");
}
    
int main() {
    // Crear cinco clases
    t_clase clases[5];

    // Inicializar información y mostrar para cada clase
    for (int i = 0; i < 5; i++) {
        inicializarDatos(&clases[i], i + 1);
        mostrarInformacionClase(&clases[i]);
    }

    return 0;
}
