// 1. Crear una función que reciba dos números enteros como parámetros, 
//    realice la suma aritmética de ambos, y retorne el resultado de la suma.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX_STRING 30

int suma_de_enteros(int a, int b) {
   int resultado = a + b;
   return resultado;
}

int main(){
    int numero1, numero2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);

    int suma = suma_de_enteros(numero1, numero2);

    printf("La suma entre %d y %d es: %d\n", numero1, numero2, suma);

    return 0;
}

// 2. Crear una función que reciba dos números enteros como parámetros, 
//    realice la resta aritmética de ambos, y retorne el resultado de la resta.

resta_de_enteros(int a, int b){
    int resultado = a - b;
    return resultado;
}

int main(){
    int numero1, numero2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);

    int resta = resta_de_enteros(numero1, numero2);

    printf("La resta entre %d y %d es: %d\n", numero1, numero2, resta);
    
    return 0;
}

// 3. Crear una función que reciba dos números enteros como parámetros,
//    realice el producto de ambos, y retorne el resultado del producto...

int producto_de_enteros(int a, int b){
    int resultado = a * b;
    return resultado;
}

int main(){
    int numero1, numero2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);

    int producto = producto_de_enteros(numero1, numero2);

    printf("El producto entre %d y %d es: %d\n", numero1, numero2, producto);

    return 0;
}

// 4. Crear una función, que reciba dos números enteros como parámetros,
//    calcule el resultado de la suma, el de la resta y el del producto,
//    y ponga dichos cálculos en argumentos de entrada-salida pasados a la función.
//    La función deberá llamar para hacer sus cálculos a las funciones desarrolladas
//    en los 3 ítems anteriores. En caso de finalización exitosa, la función deberá retornar cero.

int triple_funcion(int a, int b, int *suma, int *resta, int *producto) {
    *suma = a + b;
    *resta = a - b;
    *producto = a * b;
    return *suma, *resta, *producto;
}

int main() {
    int numero1, numero2;
    int suma, resta, producto;

    printf("Ingrese el primero numero entero: ");
    scanf("%d", &numero1);

    prinft("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);

    triple_funcion(numero1, numero2, &suma, &resta, &producto);

    printf("Resultado de la suma: %d\n", suma);
    printf("Resultado de la resta: %d\n", resta);
    printf("Resultado del producto: %d\n", producto);

    return 0;
}

// 5. Crear una función que reciba como argumento un texto, y retorne cuántas letras tiene el texto.
//    Además, la función debe mostrar por pantalla cada letra del texto por renglón.

int contarLetras(char * text) {
    int i = 0;
    int contador = 0;
    while (text[i] != '\0' && i <= MAX_STRING)
    {
        printf("%c\n", text[i]);
        contador = contador + 1;
        i++;
    }

    return contador;
}

int main() {
    char miTexto[MAX_STRING] = "Gianluca";
    int cantidad_de_letras = contarLetras(miTexto);
    printf("La cantidad de letras de el texto es %s es: %i\n", miTexto, cantidad_de_letras);
    return 0;
}

// 6. Escribir una función que reciba tres cadenas de caracteres y muestre por pantalla
//    el resultado de concatenar las tres primeras letras de las cadenas. 
//    Además, la función deberá retornar un cero si las dos primeras cadenas son iguales,
//    un dos si las últimas dos cadenas son iguales, un tres si todas las cadenas son iguales,
//    y un cuatro si todas las cadenas fueran distintas.

int procesar_cadenas(const char *cadena1, const char *cadena2, const char *cadena3) {
    char resultado[4];
    int resultado_num;

    if (strcmp(cadena1, cadena2) == 0) {
        resultado_num = 0;
    }

    else if (strcmp(cadena2, cadena3) == 0) {
        resultado_num = 2;
    }

    else if (strcmp(cadena1, cadena2) == 0 && strcmp(cadena1, cadena3) == 0) {
        resultado_num = 3;
    }

    else {
        resultado_num = 4;
    }

    snprintf(resultado, sizeof(resultado), "%.3s%.3s%.3s", cadena1, cadena2, cadena3);
    printf("Concatenación de las tres primeras letras: %s\n", resultado);
    return resultado_num;
}

int main() {
    const char *cadena1 = "Hola";
    const char *cadena2 = "Mundo";
    const char *cadena3 = "Casa";

    int resultado = procesar_cadenas(cadena1, cadena2, cadena3);

    printf("Resultado numérico: %d\n", resultado);

    return 0;
}

// 7. Escribir una función que procese las notas de los dos parciales de un alumno inscriptos en Programación 1.
//    La función recibe las dos notas, e informa por pantalla la situación del alumno junto con su nota promedio. 
//    Además, la función debe retornar la nota promedio del alumno. 

//    Las reglas para saber la situación de un alumno son las siguientes:

//    Para ser promovido (es decir, cursada aprobada y no requiere rendir ﬁnal), 
//    el alumno debe haber aprobado ambos parciales y tener un promedio mayor o igual a 7.

//    Para estar regular (cursada aprobada, pero debe rendir ﬁnal), 
//    el alumno debe haber aprobado ambos parciales (nota mayor o igual a 4).

//    Si el alumno no ha aprobado ambos parciales (es decir, tiene nota menor que 4 en alguno de ellos), 
//    entonces queda en condición de libre (es decir, puede rendir un ﬁnal extendido o recursar).

float promedio_alumnos(float nota1, float nota2) {
    float promedio = (nota1 + nota2) / 2.0;

    printf("Nota del Parcial 1: %.2f\n", nota1);
    printf("Nota del Parcial 2: %.2f\n", nota2);
    printf("Nota Promedio: %.2f\n", promedio);

    if (nota1 >= 4 && nota2 >= 4) {
        if (promedio >= 7) {
            printf("Promovido\n");
        }
        else {
            printf("Regular\n");
        }
    }
    else {
        printf("Libre\n");
    }

    return promedio;
}

int main() {
    float parcial1, parcial2;

    printf("Ingrese la nota del Parcial 1: ");
    scanf("%f", &parcial1);

    printf("Ingrese la nota del Parcial 2: ");
    scanf("%f", &parcial2);

    float promedio = promedio_alumnos(parcial1, parcial2);

    return 0;
}

// 8. Escribir un programa principal que llame a la función anterior, para un curso de n alumnos
//    inscriptos en la materia, y muestre por pantalla el promedio del curso. Las notas de los alumnos
//    en los parciales deben ser enteros entre 0 y 10 generados en forma aleatoria en el programa principal.

int main() {
    int n;
    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);

    srand(time(NULL));

    float promedioCurso = 0.0;

    for (int i = 0; i < n; i++) {
        int nota1 = rand() % 11;
        int nota2 = rand() % 11;

        printf("Notas del alumno %d:\n", i + 1);
        float promedioAlumno = procesarNotas(nota1, nota2);

        promedioCurso += promedioAlumno;
    }

    promedioCurso /= n;

    printf("\nPromedio del curso: %.2f\n", promedioCurso);

    return 0;
}

// 9. Crear una función que reciba el tipo de bomba para una máquina, siendo el tipo de bomba un valor entero entre 0 y 4.
//    Según el tipo de bomba debe mostrarse el siguiente mensaje usando un condicional switch:

//    Si el tipo de bomba es 0, mostrar un mensaje por consola indicando “No hay establecido un valor definido para el tipo de bomba”.

//    Si el tipo de bomba es 1, mostrar un mensaje por consola indicando “La bomba es una bomba de agua”.

//    Si el tipo de bomba es 2, mostrar un mensaje por consola indicando “La bomba es una bomba de gasolina”.

//    Si el tipo de bomba es 3, mostrar un mensaje por consola indicando “La bomba es una bomba de hormigón”.

//    Si el tipo de bomba es 4, mostrar un mensaje por consola indicando “La bomba es una bomba de pasta alimenticia”.

//    Si no se cumple ninguno de los valores anteriores mostrar el mensaje “No existe un valor válido para tipo de bomba”.

void mostrarTipoBomba(int tipo) {
    switch(tipo) {
        case 0:
            printf("No hay establecido un valor definido para el tipo de bomba.\n");
            break;
        case 1:
            printf("La bomba es una bomba de agua.\n");
            break;
        case 2:
            printf("La bomba es una bomba de gasolina.\n");
            break;
        case 3:
            printf("La bomba es una bomba de hormigón.\n");
            break;
        case 4:
            printf("La bomba es una bomba de pasta alimenticia.\n");
            break;
        default:
            printf("No existe un valor válido para tipo de bomba.\n");       
    }
}

int main() {
    int tipoBomba;

    printf("Ingrese el tipo de bomba (0-4): ");
    scanf("%d", &tipoBomba);
    
    mostrarTipoBomba(tipoBomba);

    return 0;
}

// 10. Escriba un programa que llame a la función anterior, en un ciclo infinito,
//     con un entero aleatorio entre 0 y 10. El ciclo debe terminar cuando el entero aleatorio sea el número 9.

int main() {
    srand(time(NULL));

    int n = rand() % 11;
    printf("Número aleatorio: %d\n", n);

    while (n != 9)
    {
        mostrarTipoBomba(n);
    }

    printf("Número aleatorio igual a 9. Terminando el programa.\n");
    return 0;
}