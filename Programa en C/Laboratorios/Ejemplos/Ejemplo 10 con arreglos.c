/*Supongamos que se conoce el nombre del alumno y la calificacion obtenida por este en un examen que fue aplicado  a un grupo de 30 alumnos. se desea 
utilizar estos datos para generar informacion, tal como promedio del grupo, calificacion mas alta y el nombre de los 
alumnos con calificacion inferior al promedio*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
char nombre[5][25],indm;
int x,v=99999,j=0,nota[5],sum=0,ind;
float prom;
for(x=0;x<=4;x++){
	printf("ESCRIBE TU NOMBRE ");
	scanf("%s",nombre[x]);
	printf("ESCRIBE TU NOTA ");
	scanf("%d",&nota[x]);
	
	system("cls");
	sum=sum+nota[x];
	
	
	if(nota[x]>j){
		j=nota[x];
		ind=x;
	}

}
prom=sum/5;
printf("EL PROMEDIO ES =%3.2f\n\n",prom);
printf("LA NOTA MAYOR ES %d y NOMBRE DEL ALUMNO ES %s\n\n",j,nombre[ind]);
for(x=0;x<=4;x++){
		if (nota[x]<prom){
		printf("%s\n",nombre[x]);
	
	}

}
}
