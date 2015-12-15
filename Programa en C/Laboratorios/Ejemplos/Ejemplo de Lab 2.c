

/*Construya un programa que permita leer 50 valores almacenalo en un vector, encuentre el 
elemento mayor y el elemento menor proporcionando dato y la posicion de este dato.*/


#include <stdio.h>
#include <conio.h>

main(){
int x[50],i;
int may,men;
int ind1,ind2;
//lectura
for(i=1;i<=50; i++){
	printf("Ingrese datos = ");
	scanf("%d", &x[i]);	
}
//Busqueda del mayor
may=x[1];
ind1=1;	
for(i=2;i<=50;i++){
	if(x[i>may]){
	may=x[i];
	ind1=i;	
	}	

}	
//Busqueda del menor
men=x[1];
ind2=1;
for(i=2; i<=50; i++){
	if(x[i]<men){
		men=x[i];
		ind2=i;
	}	
}
//Datos solicitados
	printf("El elemento mayor es %d y esta en la posicion %d", may, ind1);
	printf(" El menor es %d y su posicion es %d", men, ind2);
	
	//System ("pause");
	getchar();

}

