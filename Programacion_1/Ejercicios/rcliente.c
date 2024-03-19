#include <stdio.h>
#include <stdlib.h>


typedef struct rcliente {
 	int estado;		       
 	int codigo;	       
 	char descripcion[50]; 
    double saldo;
} rcliente;


void alta(char nom_arch[], int n) {
    FILE *arch;
    arch = fopen(nom_arch, "r+b");

    rcliente cli;

    printf("\t\t\t Ingrese el nombre del cliente: ");

    fgets(cli.descripcion, 40, stdin);
    strtok(cli.descripcion, "\n");

    printf("\t\t\t Ingrese Saldo: ");

    scanf("%lf", &cli.saldo);

    cli.estado = 1;
    cli.codigo = n;

    fseek(arch, sizeof(rcliente)*n, SEEK_SET);
    fwrite(&cli, sizeof(rcliente), 1, arch);

    fclose(arch);
}