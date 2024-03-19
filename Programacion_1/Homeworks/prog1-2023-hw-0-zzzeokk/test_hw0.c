/* test_hw0.c 
   IMPORTANTE: No modificar ni borrar ni renombrar este archivo 
   Tests del HW0 - Programacion 1, Universidad Nacional de Lujan */

/* 1 includes */
#include "hw0.c"
#include "assert.h"
#include <stdio.h>
/* 2 defines */
// Testings sumar dos numeros (s), positividad (p), sumar intervalo (t)
#define OPTSTR "s:p:t"
/* 3 external declarations */
/* 4 typedefs */
/* 5 global variable declarations */
/* 6 function prototypes */

void testSumarDosNumeros();
void testPositividad();
void testSumarIntervalo();
void test_all();

int main(int argc, char *argv[]) {
// /* 7 command-line parsing */
    if(argc==1)
        test_all();

    if(argc>=2)
    {
        int opt = *(argv[1]);
        switch (opt)
        {
        case 's':
            testSumarDosNumeros();
            break;

        case 'p':
            testPositividad();
            break;

        case 't':
            testSumarIntervalo();
            break;

        default:
            printf("Ese parametro de linea no existe!\n");
            return 1;
        }
    }
    return 0;
}

/* 8 function declarations */

// Funciones de tests

void testSumarDosNumeros(){
    printf("Testeando sumar_dos_numeros()... ");
    assert(sumar_dos_numeros(1, 3) == 4 );
    assert(sumar_dos_numeros(1, 0) == 1);
    assert(sumar_dos_numeros(-4, 5) == 1);
    printf("Paso!\n");
}

void testPositividad(){
    printf("Testeando positividad()... ");
    assert(positividad(1) == 1); 
    assert(positividad(-4) == 0);
    assert(positividad(0) == 1);
    printf("Paso!\n");
}

void testSumarIntervalo(){
    printf("Testeando sumar_intervalo()... ");
    assert(sumar_intervalo(1, 3) == 6 );
    assert(sumar_intervalo(5, 6) == 11);
    assert(sumar_intervalo(3, 7) == 25);
    printf("Paso!\n");
}

void test_all(){
    printf("Testear todo...\n");
    testSumarDosNumeros();
    testPositividad();
    testSumarIntervalo();
    printf("Pasaste todos los tests. Felicitaciones!!\n");
}