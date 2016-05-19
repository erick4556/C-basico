#include <stdio.h>
#include <conio.h>

main(){
		int n,x,g;
	float sal[4],salim[4],salto[4];
	float prom,sum=0,no;
	char name[4][15]; 
	
	
	printf("                   Bienvenido al sistema\n\n");
	while(n!=4){
	printf("1.Calcular planilla\n2.Sacar promedio\n3.Saludos\n4.Salir");
	printf("Ingrese su opcion a elegir ingresando numeros de (1-3) y 4 si desea salir\n");
	printf("Digite su numero : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			for(x=0;x<=3;x++){
				printf("Ingrese nombre [%d] : ",x+1);
				scanf("%s",name[x]);
				printf("Ingrese salario [%d] : ",x+1);
				scanf("%f",&sal[x]);
				
				if(sal[x]<=600)
					salto[x]=sal[x];
				else	
				if(sal[x]>600 && sal[x]<=800){
					salim[x]=sal[x]*0.10;
					salto[x]=sal[x]-salim[x];
				}else
					if(sal[x]>800 & sal[x]<=1000){
						salim[x]=sal[x]*0.15;
					salto[x]=sal[x]-salim[x];
					}else
						if(sal[x]>1000){
							salim[x]=sal[x]*0.20;
							salto[x]=sal[x]-salim[x];
						}
			}
			
			printf("N°         Nombre         Salario          Impuesto           Salario total\n\n");
			
			for(x=0;x<=3;x++)
			printf("%d          %s              %.2f            %.2f                 %.2f\n\n",x+1,name[x],sal[x],salim[x],salto[x]);
			
			break;
			
			case 2:
			
			printf("        Bienvenido al calculo de notas \n\n");
			printf("Introduzca la cantidad de nota a calcular : ");
			scanf("%d",&g);
			for(x=1;x<=g;x++){
				printf("Nota [%d] : ",x);
				scanf("%f",&no);
				sum+=no;
			}		
			
			prom=sum/g;
			
			printf("Su promedio es : %.2f\n",prom);
			
			break;
			
			case 3:
				printf("Este es un mensaje de saludos.. Gracias por preferirnos :)\n");
				
				case 4:
					getchar();
					break;
					
					default:
						printf("Opcion Invalida....\n");
	}
	
}
	
}
