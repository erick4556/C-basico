#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main(){
int  edad,f;
char nombre[20];
FILE *archivo;
archivo=fopen("Estud.txt", "w");
if(archivo!=NULL){
	for( f=0;f<3;f++){
		//printf("Ingrese nombre y la edad: ");
		//scanf("%s   %d",nombre,&edad);
		//fprintf(archivo,"%s  %d  ",nombre,edad);
		printf("Ingrese nombre  ");
		scanf("%s",nombre);
		printf("\n Ingrese edad ");
		scanf("%d",&edad);
		
		fprintf(archivo,"%s    %d",nombre,edad);
	}
	fclose(archivo);
}
else
	printf("No se puede crear el archivo");
	getch();
}



