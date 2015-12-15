/*17. Escriba un programa que intercambie por renglón los elementos de un arreglo bidimensional.
Los elementos del renglón 1 deben intercambiarse con los del renglón
N, los del renglón 2 con los del N - 1, Y así sucesivamente.*/
#include <stdio.h>
#include <conio.h>
#define fila 4
#define colum 4
main(){

int a[fila][colum]={{3,5,6,8},{2,3,6,1},{2,4,1,6},{3,6,9,0}};
int i;
int e;
for(i=0; i<fila; i++){
	printf("\n");
	for(e=0; e<colum; e++)
	printf(a[i][e]);
}

getch();

}
