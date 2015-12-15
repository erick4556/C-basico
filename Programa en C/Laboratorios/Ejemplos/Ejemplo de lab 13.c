//Arreglo bidimensional con conjunto
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
char nom[3][25]; 
int i,j;
float suma=0,prog,proa[3];
int par [3][3]={75,80,90,60,75,73,78,80,93};
      //Entrada
      printf("Ingrese el nombre\n");
for(i=0;i<=2;i++)
{
      printf("Ingrese Nombre[%d]:",i+1);
      scanf("%s",nom[i]); 
}
for(i=0;i<=2;i++)
          proa[i]=0;
//Proceso y salida
	  system("cls");
      printf("        RESULTADO DE PARCIALES   \n\n\n");
      printf("Nombre      P1      P2     P3          Promedio del Alumno\n\n");
for(i=0;i<=2;i++)
{
          printf("\n%s   ",nom[i]);
          for(j=0;j<=2;j++)
          {
		    printf(" %d    ",par[i][j]);
            proa[i]+=par[i][j];
          }
          suma+=proa[i]/3;
		  printf("       %3.1f\n",proa[i]/3);
      	  
}
		               
      printf("Promedio del grupo = %3.1f\n",suma/3);
	   
      system("PAUSE");
       
}
