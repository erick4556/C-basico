#include <stdio.h>
#include <stdlib.h>
main(){
	int i;
	FILE *archivo;
	archivo =fopen("test4.txt","w");
	if(archivo!=NULL){
		for(i=0;i<=10;i++)
		fprintf(archivo,"%d %d\n",i,i*i);
		fclose(archivo);
	}
	else
	printf("No se puede crear el archivo...");
	getch();
}
