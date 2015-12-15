/*Supongamos que se conoce el nombre del alumno y la calificacion obtenida por este en un examen que fue aplicado  a un grupo de 30 alumnos. se desea 
utilizar estos datos para generar informacion, tal como promedio del grupo, calificacion mas alta y el nombre de los alumnos con calificacion inferior al promedio*/
#include<stdio.h>
#include<conio.h>

main()
{
      struct{
             char nombre[15];
             int n1;
             }alumno[5];
  float prom;
  int sum=0;
  float calta;
  char nombre_calbaj[15];
  int x;
  
  for(x=0; x<=4; x++)
 {  
 system("cls");                  
 printf("Ingrese los datos del alumno\n"); 
 printf("Dame un nombre \n");
 scanf("%s",alumno[x].nombre);          
 printf("Introduzca su nota= ");
 scanf("%d",&alumno[x].n1);
 sum+=alumno[x].n1;
 }

 prom=sum/5;
 printf("Nombre es= %s\n",alumno[x].nombre);
 printf("Este es el promedio del grupo= %3.1f\n",prom);
 
 
 
 system("PAUSE");
}            
