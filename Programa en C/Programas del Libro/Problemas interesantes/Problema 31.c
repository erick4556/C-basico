/*31. Escriba un programa que calcule e imprima los números perfectos comprendidos
entre dos números A y B. Un número es perfecto si la suma de sus divisores, excepto
él mismo, es igual al propio número.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,suma=0,n;
	printf("Introduce un numero\n");
	scanf("&d",&n);
	
	for(i=1; i<n; i++){
	if(n%i==0)
		suma= suma+i;
		
	}
	if(suma==n)
	
		printf("Numero es perfecto\n");
	
	else
	
		printf("Numero no es perfecto");
	getchar();
}

