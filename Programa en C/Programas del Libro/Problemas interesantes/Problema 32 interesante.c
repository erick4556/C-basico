/*32. Escriba un subprograma que reciba como datos el nombre de un d�a de la semana y
un n�mero entero N, positivo o negativo, e imprima el d�a de la semana correspondiente
a N d�as despu�s -positivo- o N d�as antes -negativo- del d�a dado.*/

#include <stdio.h>
#include <conio.h>

main(){
	int x; 
	char 'sem';
	printf("Escriba un dia de la semana");
	scanf("%c", sem);
	
	for(x=1; x<sem; x++){
		printf("Escriba un dia de la semana\n");
		scanf("%3.1d %c",x,sem);
		
	}
		
	getchar();
}

