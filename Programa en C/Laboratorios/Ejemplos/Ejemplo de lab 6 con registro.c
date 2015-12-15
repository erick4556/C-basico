/*Calcular la media de las notas de los estudiantes*/


#include <stdio.h>
#include <conio.h>
main()
{
      struct{
             float n1,n2,n3;
             }notas;
float media;
float sum1=0;
int x;


for(x=1; x<=5; x++)
{
system("cls");         
printf("\nIngrese los datos del alumno\n\n",x);
printf("Introduzca la 1 nota = ");
scanf("%f",&notas.n1);  
printf("Introduzca la 2 nota = ");
scanf("%f",&notas.n2);
printf("Introduzca la 3 nota = ");
scanf("%f",&notas.n3);
sum1=notas.n1+notas.n2+notas.n3;
printf("Nota 1 = %3.1f", notas.n1);
}

media=sum1/5;
printf("Media =  %3.1f", media);
/*system("cls");
printf("          *Calcula la media de los alumnos por nota*\n\n\n");
printf("            nota1=     nota2=     nota3=    ");
for(x=1;x<=5;x++)

printf("\n %3.1f    %3.1f    %3.1f    %3.1f    %3.1f\n", n1[x],n2[x],n3[x],media[x]);


printf("\n\n\n    La media es = %3.1f   %3.1f     %3.1f     %3.1f  ", media[1], media[2], media[3]);*/
getchar();

}
