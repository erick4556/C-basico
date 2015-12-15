//Arreglo bidimensional.
#include <stdio.h>
#include <conio.h>

main()
{
      int f,c;
      int a[3][3];
      int b[3][3];
      int d[3][3];
      //lectura
      //system("cls");
      printf ("\n                  ENTRADA DE DATOS DE MATRIZ A \n");
      for(f=0; f<=2; f++)
      for(c=0; c<=2; c++)
      {
         printf("\n                  Ingrese datos  = ");
         scanf("%d", &a[f][c]);
         
         }
          printf ("\n                  ENTRADA DE DATOS DE MATRIZ B \n");
      for(f=0; f<=2; f++)
      for(c=0; c<=2; c++)
      {
         printf("\n                  Ingrese datos  = ");
         scanf("%d", &b[f][c]);
         
         }
         
          for(f=0; f<=2; f++)
          for(c=0; c<=2; c++){
		 	d[f][c]=a[f][c]+b[f][c];
		  }
                   
        // system("cls");
         printf ("\n                    MATRIZ D\n\n\n");
          //Escritura
      for(f=0; f<=2; f++)
      {
          printf("\n\n"); 
      for(c=0; c<=2; c++)
         printf("          %d    ", d[f][c]);
      }         
      getch();
         
}     
