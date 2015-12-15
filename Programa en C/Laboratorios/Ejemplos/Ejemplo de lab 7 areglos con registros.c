/*Calcular la media de las notas de los estudiantes*/


#include <stdio.h>
#include <conio.h>
main()
{
      struct{
             float n1,n2,n3;
             }notas[5];
float media;
float sum1=0;
int x;


for(x=0; x<=4; x++)
{
  system("cls");       
printf("\nIngrese los datos del alumno\n\n",x);
printf("Introduzca la 1 nota = ");
scanf("%f",&notas[x].n1);  
printf("Introduzca la 2 nota = ");
scanf("%f",&notas[x].n2);
printf("Introduzca la 3 nota = ");
scanf("%f",&notas[x].n3);
sum1=notas[x].n1+notas[x].n2+notas[x].n3;

system("PAUSE");
}

media=sum1/5;
system("cls");
printf("          *Calcula la media de los alumnos por nota*\n\n\n");
printf(" Nota1=   Nota2=   Nota3=    ");
for(x=0;x<=4;x++)

printf("\n %3.1f    %3.1f      %3.1f\n", notas[x].n1,notas[x].n2,notas[x].n3);


printf("\n\n\n La media es =  %3.1f    \n\n",media);
getch();

}
