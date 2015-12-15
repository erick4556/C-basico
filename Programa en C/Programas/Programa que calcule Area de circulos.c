/*Programa para calcular areas de varios circulos, usando un bucle for; no se especifica el numero de circulos*/

#include<stdio.h>
#define PI 3.14159

float procesar(float radio); //Prototipo de funcion
main()
{
	
float radio, area;
int cont;
printf("Para PARAR, introducir 0 en el valor del radio");
printf("\nRadio = ");
scanf("%f", radio);

for (cont=1; radio!=0; cont++){
	if (radio<0)
		area=0;
	else
		area = procesar(radio);
	
	printf("Area = %f\n", area);
	printf("\nRadio = ");
	scanf("%f", &radio);
}


float procesar (float r)
{
	
	float a;
	
	a = PI * r * r;
	return(a);
}
	
}	
	

