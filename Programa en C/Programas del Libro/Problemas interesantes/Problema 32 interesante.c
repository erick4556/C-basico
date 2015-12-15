/*32. Escriba un subprograma que reciba como datos el nombre de un día de la semana y
un número entero N, positivo o negativo, e imprima el día de la semana correspondiente
a N días después -positivo- o N días antes -negativo- del día dado.*/

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

