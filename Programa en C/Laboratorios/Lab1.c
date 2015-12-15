#include <stdio.h>
#include <conio.h>

main(){
	int suma=0,n,num;
	float prom;
	printf("Programa - Leer los numeros \n");
	for(n=1; n<=5; n++){
		scanf("%d", &num);
		suma=suma+num;
		
	}
	prom=suma/10;
	printf("La suma es = %d \n", suma);
	printf("El promedio es = %5.2f", prom);
	getchar();
}
