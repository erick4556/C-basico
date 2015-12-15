//Arreglo unidimensional sencillo con arreglo de tipo cadena.
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
      int i;
      char dato[5][25];
      //Entrada
      printf("Entrada de datos\n");
      for(i=0;i<=4;i++){
      printf("Dato[%d]:",i+1);
      scanf("%s",dato[i]);
      }
      //Salida de datos
      
      system("cls");
      //Salida
      printf("Salida de datos \n\n\n");
      printf("N°          Datos\n");
       for(i=0;i<=4;i++){
       printf("%d          %s\n",i+1,dato[i]);
       }
       
       getchar();
       
}
