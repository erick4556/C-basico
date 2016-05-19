#include <conio.h>
#include <stdio.h>
/*Problema 1: La empresa Corpinsa, requiere un programa que permita calcular la planilla de un empleado, imprimiendo el salario bruto mensual, 
dadas las horas trabajadas  por mes y la tasa horaria. Se debe imprimir el nombre del empleado y el salario bruto mensual. */
main(){
	
	char name[10];
	int x,hor,n,s,a;
	float salbru,suelho,tashor,base,altura,area;
	int m,q,z;
	
	while(a!=4){
	printf("1. Calcular planilla de empleado \n");
	printf("2. Calcular multiplos de 3 \n");
	printf("3.  Calcular el area de un triangulo\n");
	printf("4.  Salir\n");
	
	printf("Introduzca su opcion de (1-3) y 4 si desea salir del programa : ");
	scanf("%d",&a);
	
	//switch principal.
	switch(a){

//---------------------------------------------------------------------------------------------------
//Programa 1 empleados		
	case 1:
	while(x != 4){
	printf("     Menu de Opciones \n\n");
	printf(" 1. Opcion 1\n");
	printf(" 2. Opcion 2\n");
	printf(" 3. Opcion 3\n");
	printf(" 4. Opcion 4 Salir\n");
	
	printf("Introduzca su opcion de (1-3) y 4 si desea salir del programa : ");
	scanf("%d",&x);
	
	
	switch(x)
	{
	
		case 1:
			printf("Introduzca su nombre : ");
			scanf("%s",name);
			printf("Introduzca tasa horarios : ");
			scanf("%f",&tashor);
			printf("Introduzca la cantidad horas trabajadas al mes : ");
			scanf("%d",&hor);
			salbru= tashor*hor;
			printf(" Nombre : %s\n",name);
			printf(" Horas trabajadas : %d\n",hor);
			printf(" Tasa de horaria es : %.2f\n",tashor);
			printf(" Salario bruto mensual : %.2f\n\n",salbru);	
			
			break;
			
		case 2:
			printf("Introduzca su nombre : ");
			scanf("%s",name);
			printf("Introduzca tasa horarios : ");
			scanf("%f",&tashor);
			printf("Introduzca la cantidad horas trabajadas al mes : ");
			scanf("%d",&hor);	
			salbru= tashor*hor;
			printf(" Nombre : %s\n",name);
			printf(" Horas trabajadas : %d\n",hor);
			printf(" Tasa de horaria es : %.2f\n",tashor);
			printf(" Salario bruto mensual : %.2f\n\n",salbru);	
			
			break;
			
			case 3:
	
			printf("Introduzca su nombre : ");
			scanf("%s",name);
			printf("Introduzca tasa horarios : ");
			scanf("%f",&tashor);
			printf("Introduzca la cantidad horas trabajadas al mes : ");
			scanf("%d",&hor);
			salbru= tashor*hor;
			printf(" Nombre : %s\n",name);
			printf(" Horas trabajadas : %d\n",hor);
			printf(" Tasa de horaria es : %f\n",tashor);
			printf(" Salario bruto mensual : %.2f\n\n",salbru);	
			
			break;
			
				case 4:
					getchar;
					
					break;
					
					case 5:
					printf("\nOpcion invalida \n\n");		
					break;		
		}
		
}

printf("\n\n");
//--------------------------------------------------------------------------------------------------------------
	
	//Aqui va empesar 2.
		case 2:
				printf("1. Calcular multiplos\n");
				printf("2.  Salir \n");
				printf("Introduzca numero (1-2) : ");
				scanf("%d",&q);
			switch(q){
				case 1:
		for(m=1;m<=100;m++){
			if(m%3==0)
				printf("Multiplo de 3 : %d\n",m);
	}
		break;
			case 2:
				getchar();
			break;
			}
			
			printf("\n\n");
			//Aqui va empezar el 3 programa.
			case 3:
				printf("1. Calcular Area\n");
				printf("2.  Salir\n");
				printf("Introduzca numero (1-2) : ");
				scanf("%d",&z);
				switch(z){
					case 1:
				printf("Base : ");
				scanf("%f",&base);
				printf("Altura : ");
				scanf("%f",&altura);
				area=(base*altura)/2;
				printf("Area : %.2f\n",area);
				
					break;
					
					case 2:
						getchar();
					break;
				}
				
				case 5:
					printf("\nOpcion invalida \n\n");		
					break;
		
		}
	}

}
