//Arreglo unidimensional sencillo con arreglo de registro.
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
      struct{
            char nom[5][25]; 
             float sal;
             }emp[5];
      int i;
      float suma=0,salpro;
      //Entrada
      printf("Entrada de datos\n");
      for(i=0;i<=4;i++){
      printf("Ingrese Nombre[%d]:",i+1);
      scanf("%s",emp[i].nom);
      printf("Ingrese el salario[%d]:",i+1);
      scanf("%f",&emp[i].sal);
      suma+=emp[i].sal;      
      }
      system("cls");
      //Salida
      printf("Reporte de empleado   \n\n\n");
      printf("N°          Nombre             Salario\n\n");
       for(i=0;i<=4;i++){
       printf("%d          %s              %3.2f\n",i+1,emp[i].nom,emp[i].sal);
       }
       salpro=suma/5;
       printf("\n\n El promedio es =%3.2f \n",salpro);
       system("PAUSE");
       
}
