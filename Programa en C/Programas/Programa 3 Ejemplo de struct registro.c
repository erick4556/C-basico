#include <stdio.h>
#include <conio.h>
#include <string.h>
struct {
int matricula;
char nombre[30];
int edad;
}alumno;
 main() 
{

// captura de campos
printf("Dame una matricula :");
scanf("%d",&alumno.matricula);
printf("Dame un nombre :");getchar();
gets(alumno.nombre);
printf("Dame una edad :");
scanf("%d",&alumno.edad);
// area de operaciones
alumno.edad = alumno.edad * 12;
// area de salida
printf("MATRICULA =%d \n",alumno.matricula);
printf("NOMBRE =%s \n",alumno.nombre);
printf("MESES =%d \n",alumno.edad);
getchar();
}
