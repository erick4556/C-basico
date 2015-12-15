//Escribir un programa que permita hacer esto leer y almacenar una matriz ordene 4x5 con datos enteros almacenar la suma cada renglon.
#include<stdio.h>
#include<conio.h>

main(){
	
int m[4][5];
int f,c;
int tab[4]={0};
int l;

//Lectura
system("cls");

printf("\n                           Matriz M\n");
for(f=0;f<=3;f++)
for(c=0;c<=4;c++){

printf("            Ingrese datos= ");	
scanf("%d", &m[f][c]);	
}
system("cls");
printf("          Matriz M\n\n\n");
//Escritura
for(f=0;f<=3;f++)
{
	printf("\n\n");
	for(c=0;c<=4;c++)
	
	printf("    %d     ",m[f][c]);	

}

	printf("\n\n Arreglo Tab \n\n");

	for(f=0;f<=3;f++)
		for(c=0;c<=4;c++)
			tab[f]+=m[f][c];
	for(l=0;l<=3;l++)		
		printf(" %d \n ",tab[l]);	
	

system("pause");	
	
}
