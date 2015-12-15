/*Supongamos que se conoce el nombre del alumno y la calificacion obtenida por este en un examen que fue aplicado  a un grupo de 30 alumnos. se desea 
utilizar estos datos para generar informacion, tal como promedio del grupo, calificacion mas alta y el nombre de los alumnos con calificacion 
inferior al promedio*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

float promg=0;
int hcal=0;
int a;

struct{
       char nombre[15];
       int cal;
}salon[5];

int main()
{
    printf("Introdusca los nombres y las notas de los estudiantes\n\n");
    for(a=0;a<=4;a++)
    {
                      printf("Nombre del Estudiante %d: ", a+1);
                      scanf("%s", salon[a].nombre);
                      printf("\n");
                      printf("Nota del Estudiate %d: ", a+1);
                      scanf("%d", &salon[a].cal);
                      printf("\n");
                      promg+=salon[a].cal;
                      if(salon[a].cal > salon[hcal].cal)
                      hcal=a;
    }
    promg=promg/5;
    printf("Promedio del Grupo : %f", promg);
    printf("\n\n");
    printf("*Calificacion mas Alta*\n\n");
    printf("Nombre : %s",salon[hcal].nombre);
    printf("\n\n");
    printf("Calificacion : %d", salon[hcal].cal);
    printf("\n\n");
    printf("Nombres de los Estudiantes con Calificaciones Inferiores al Promedio");
    for(a=0;a<=4;a++)
    {
                     if(salon[a].cal < promg)
                     {
                                     printf("\n-%s",salon[a].nombre);
                     }
    }
    printf("\n\n");
    system("pause");
            
}
