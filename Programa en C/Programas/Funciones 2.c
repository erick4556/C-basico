#include <conio.h>
#include <stdio.h>

int result(int a, int b);
int multi(int a, int b);
int div(int a, int b);
void saludo(int o, int r);

int result(int a, int b)
{
	int sum=0;
	
	sum=a+b;
	return sum;
}

int multi(int a, int b){
	int multi;
	multi=a*b;
	return multi;
}

int div(int a, int b){
	float div;
	div= a/b;
	return div;
}

void saludo(int o, int r)
{
	int sum=0;
	sum=o+r;
	printf("La otra suma es %d\n",sum);
	printf("Hola amiguitos , disfrutaron el curso");
}

main(){
	int num1,num2;
	printf("Ingrese los numeros\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	printf("La suma es %d\n",result(num1,num2));
	printf("La multiplicacion es %d\n",multi(num1,num2));
	printf("La division es %d\n",div(num1,num2));
	
	saludo(num1,num2);
	
}
