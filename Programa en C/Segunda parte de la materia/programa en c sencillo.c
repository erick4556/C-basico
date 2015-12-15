#include <stdio.h>
#include <conio.h>

main(){
int edad;
char nombre[25];

printf("Introduzca su nombre\n");
scanf("%s",nombre);
printf("Introduzca la edad\n");       
scanf("%d",&edad);       
             
printf("%s",nombre);             
printf("\n%d\n",edad);

getch();             
}
