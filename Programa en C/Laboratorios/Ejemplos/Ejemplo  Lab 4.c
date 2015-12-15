//Areglo bidimensional.
#include <stdio.h>
#include <conio.h>

main()
{
      int f,c;
      int m[3][3];
      //lectura
      system("cls");
      printf ("\n                                    ENTRADA DE DATOS \n");
      for(f=0; f<=2; f++)
      for(c=0; c<=2; c++)
      {
         printf("\n                  Ingrese datos = ");
         scanf("%d", &m[f][c]);
         
         }
        // system("cls");
         printf ("\n                    MATRIZ M\n\n\n");
          //Escritura
      for(f=0; f<=2; f++)
      {
          printf("\n\n"); 
      for(c=0; c<=2; c++)
         printf("          %d    ", m[f][c]);
      }         
      getch();
         
}     
