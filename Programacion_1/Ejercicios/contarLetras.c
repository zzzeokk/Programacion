// Crear una funcion que reciba como argumento un texto, y retorne cuantas letras tiene el texto.
// Ademas, la funcion debe mostrar por pantalla cada letra del texto por renglon

#include <stdio.h>
#include <string.h>
#define MAX_STRING 30

int contarLetras(char * text[MAX_STRING]) {
    return strlen(text);
    int i = 0;
    int contador = 0;
    while(text[i] != '\0' && i <= MAX_STRING)
    {   
        printf("%c\n" ,text[i]);
        contador = contador + 1;
        i ++;
    }

    return contador;
}

int main() {
    char miTexto[MAX_STRING] = 'Mario';
    int cantidad_de_letras = contarLetras(miTexto);
    printf("La cantidad de letras de el texto %s es: %i \n", miTexto, cantidad_de_letras);
}