#include <stdio.h>

int main()
{
	int cuenta;
	char nombre[30];
	double saldo;
	
	FILE *ptrCf;
	
	if((ptrCf =fopen("clientes.dat", "w"))==NULL){
		printf("El archivo no pudo abrirse\n");
	}
	else{
		printf("Introsuzca la cuenta, el nombre, y el saldo.\n");
		printf("Introduzca EOF al final de la entrada\n");
		printf("?");
		scanf("%d %s %1f",&cuenta, nombre, &saldo);
		while(!feof(stdin)){
			fprintf(ptrCf, "%d %s %.2f\n",cuenta,nombre,saldo);
			printf("?");
			scanf("%d %s %1f", &cuenta, nombre, &saldo);
		}
		fclose(ptrCf);
	}
	return 0;
}
