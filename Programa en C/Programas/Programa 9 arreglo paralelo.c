#include <stdio.h>
#include <conio.h>
main()
{
float n1[5],n2[5],n3[5],media=0;
int x;
//float sum1=0, sum2=0, sum3=0;
float sum=0;
for(x=0; x<=4; x++){
system("cls");
printf("\nIngrese los datos del alumno\n\n");
printf("Introduzca la 1 nota = ");
scanf("%f",&n1[x]);  
printf("Introduzca la 2 nota = ");
scanf("%f",&n2[x]);
printf("Introduzca la 3 nota = ");
scanf("%f",&n3[x]);
sum+=n1[x]+n2[x]+n3[x];
//sum2=sum2+n2[x];
//sum3=sum3+n3[x];
system("PAUSE");
}

media=sum/5;
//media[2]=sum2/5;
//media[3]=sum3/5;
system("cls");
//printf("          *Calcula la media de los alumnos por nota*\n\n\n");
printf("Nota1     Nota2      Nota3    ");
for(x=0;x<=4;x++){
printf("\n %3.1f      %3.1f      %3.1f      \n", n1[x],n2[x],n3[x]);

//printf("\n\n\nLa media es = \n%3.1f       %3.1f     %3.1f    ", media[1], media[2], media[3]);*/
}
printf("\n La media es =  %3.1f   ",media);
getch();

}
