/* test_hw1.c 
   IMPORTANTE: No modificar ni borrar ni renombrar este archivo 
   Tests del HW1 - Programacion 1, Universidad Nacional de Lujan */

/* 1 includes */
#include "hw1.c"
#include "assert.h"
#include <stdio.h>
/* 2 defines */
// Testings apariciones (a), mayor (m), reverso (r), ordenado (o)
#define OPTSTR "a:m:r:o"
/* 3 external declarations */
/* 4 typedefs */
/* 5 global variable declarations */
int m1[] = {1,3,2};
int m2[] = {2};
int m3[] = {6,4};
int m4[] = {1,1,2};
int r_m1[] = {2,3,1};
int r_m3[] = {4,6};
/* 6 function prototypes */
void test_apariciones();
void test_mayor();
void test_reverso();
void test_ordenado();
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
        case 'a':
            test_apariciones();
            break;

        case 'm':
            test_mayor();
            break;

        case 'r':
            test_reverso();
            break;

        case 'o':
            test_ordenado();
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

void test_apariciones(){
    printf("Corriendo test_apariciones... ");
    assert(apariciones(m1,3,3) == 1);
    assert(apariciones(m1,3,8) == 0);    
    assert(apariciones(m2,1,2) == 1);    
    assert(apariciones(m4,3,1) == 2);   
    printf("Paso!\n");
}

void test_mayor(){
    printf("Corriendo test_mayor... ");
    assert(mayor(m1,3) == 3);
    assert(mayor(m2,1) == 2);
    assert(mayor(m3,2) == 6); 
    printf("Paso!\n");
}

void test_reverso(){
    printf("Corriendo test_reverso... ");
    assert(reverso(m1,r_m1,3) == 1);
    assert(reverso(m3,r_m3,2) == 1);
    assert(reverso(m2,m2,1) == 1);
    assert(reverso(m1,m4,3) == 0); 
    printf("Paso!\n");
}

void test_ordenado(){
    printf("Corriendo test_ordenado... ");
    assert(ordenado(m1,3)==0);
    assert(ordenado(m2,1)==1);    
    assert(ordenado(m3,2)==1);  
    assert(ordenado(m4,3)==1);   
    printf("Paso!\n");
}

void test_all(){
    printf("Testear todo...\n");
    test_apariciones();
    test_mayor();
    test_reverso();
    test_ordenado();
    printf("Pasaste todos los tests. Felicitaciones!!\n");
}