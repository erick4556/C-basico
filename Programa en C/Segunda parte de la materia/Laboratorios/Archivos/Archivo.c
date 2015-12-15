/*Programa que muestra la lectura y escritura de una cadena de N caracteres en fichero.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *fp;
	char cadena[]="Algoritmo y Estructura de Datos", leida[20];
	fp=fopen("ejemplo.txt","w");
	fputs(cadena,fp);
	fclose(fp);
	fp=fopen("ejemplo.txt","r");
	fgets(leida,sizeof(leida)/sizeof(char),fp);
	fclose(fp);
	printf("\nCadena leida: %s\n",leida);
	system("PAUSE");
	return 0;
}
