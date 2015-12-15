#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main(){
int  edad,sum=0,f;
float prom;
char nombre[20];
FILE *archivo;
archivo =fopen("Estud.txt", "r");
if(archivo!=NULL){
	printf("                  Reporte\n\n");
	printf("N°          Nombre      Edad\n");
	for(f=0;f<3;f++){
	fscanf(archivo,"%s",nombre);
	fscanf(archivo,"%d",&edad);
	printf("%d           %s           %d \n",f+1,nombre,edad);
	sum+=edad;
	}
	prom=sum/3;
	printf("\nEl promedio es %2.1f",prom);
	
	fclose(archivo);
}
else
	printf("No se puede leer el archivo...");
	getch();
}

