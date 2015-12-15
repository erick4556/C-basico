#include <stdio.h>
#include <conio.h>
 main()
{
float n1[5],n2[5],n3[5],media[5];
int i;

for(i=0; i<=4; i++)
{
 
 printf("Ingrese los datos del alumo %d \n\n",i);        
 printf("Calcula la media de 5 notas*\n\n");
 printf("Introduzca la 1 nota = ");
 scanf("%f", &n1[i]);  
 printf("Introduzca la 2 nota = ");
 scanf("%f", &n2[i]);
 printf("Introduzca la 3 nota = ");
 scanf("%f", &n3[i]);

 media[i]=n1[i]+n2[i]+n3[i]/3;
}

printf("Calcula la media de los alumnos \n\n");
for(i=0; i<=4; i++)
{ 
 printf("\n %3.1f   %3.1f    %3.1f     %3.1f",n1[i],n2[i],n3[i],media[i]);         
 printf("Introduzca la 1 nota = ");
 scanf("%f", &n1[i]);  
 printf("Introduzca la 2 nota = ");
 scanf("%f", &n2[i]);
 printf("Introduzca la 3 nota = ");
 scanf("%f", &n3[i]);

 media[i]=n1[i]+n2[i]+n3[i]/3;
}
printf("La media es = %f", media);

getch();
}    
