#include <stdio.h>
#include <conio.h>

main(){
	int num[10],n;
	int sum=0,media=0;
	printf("Programa 1 - leer 10 numeros \n\n");
	for (n=0; n<=9; n++){
	printf("\n Ingrese %d datos = ",n+1);
	scanf("%d", &num[n]);
	sum+=num[n];
	}	
	media=sum/5;
	printf("\n\n\n  Reporte de datos \n\n");
	printf("No.               Datos");
	for(n=0;n<=9;n++){
		printf("\n%d                  %d",n+1,num[n]);
	}
	printf("\nsuma=              %d",sum);
	printf("\nmedia=             %d",media);
	getch();
}
