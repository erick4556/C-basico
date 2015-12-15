/*Calcular la media de las notas de los estudiantes*/

#include <stdio.h>
#include <conio.h>
main()
{
float n1,n2,n3,media;
int x;

printf("*Calcula la media de 3 notas*\n\n");

printf("Introduzca la 1 nota = ");
scanf("%f",&n1);  
printf("Introduzca la 2 nota = ");
scanf("%f",&n2);
printf("Introduzca la 3 nota = ");
scanf("%f",&n3);
media=(n1+n2+n3)/3;
printf("La media es = %f", media);

getchar();

}
