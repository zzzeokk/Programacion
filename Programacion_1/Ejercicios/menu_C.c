// Ejemplo de Menu en C

#include <stdio.h>
#include <stdlib.h>

void pausa(void){
    getc(stdin);
    printf(" Presione Enter para continuar... ");
    getc(stdin);
}


void cargar(int v[], int tamaño) {
    int i;
    for (i=0; i<tamaño; i++){
        printf("Ingrese el %i valor: ", i + 1);
        scanf("%i", &v[i]);
    }
}

void mostrar(int v[], int tamaño) {
    int i;
    for (i=0; i<tamaño; i++){
        printf("%i", v[i]);
    }
}

void mostrarmenu(void){
    system("clear");
    printf("\t\t\t Menu Principal\n");
    printf("\t\t 1. Ingresar 10 Numeros\n");
    printf("\t\t 2. Ver los numeros ingresados\n");
    printf("\t\t 3. Mostrar la suma de todos\n");
    printf("\t\t 4. Mostrar el promedio\n");
    printf("\t\t 5. Mostrar el menor y su posicion\n");
    printf("\t\t 6. Mostrar el mayor y su posicion\n");
    printf("\t\t 7. Modificar un valor\n");
    printf("\n\t\t\t 2.");
}

int main(void){
    int numeros[10];
    int salir = 1;
    int opcion;

    while(salir != 0){
        mostrarmenu();

        printf(" Ingrese una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion){
            case 1: 
                cargar(numeros, 10);
                break;
            case 2:
                mostrar(numeros, 10);
                break;
            case 3:
                suma(numeros, 10);
                break;
            case 4:
                promedio(numeros, 10);
                break;
            case 5:
                menor(numeros, 10);
                break;
            case 6:
                mayor(numeros, 10);
                break;
            case 7:
                modificar(numeros, 10);
                break;
            case 0:
                salir = 0;
                break;
            default:
                printf("%d es una opcion incorrecta\n", opcion);
        }
    }

}