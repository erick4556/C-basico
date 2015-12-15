//Programa que obtenga registro de 25 estudiantes.
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct {
char nombre[20];
int edad;
}alumno;
 main() 
{

// captura de campos
printf("    Salida    \n\n");
printf("Dame un nombre :");getchar();
gets(alumno.nombre);
printf("Dame una edad :");
scanf("%d",&alumno.edad);
// area de salida
system("cls");
printf("N°     Nombre        Edad");
printf("\n\n\n       %s          %d",alumno.nombre,alumno.edad);

getchar();
}

