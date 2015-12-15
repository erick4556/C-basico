#include<stdio.h>
#include<conio.h>

main()
{
     int cal[5][3];
     int i,j;
     //Lectura de datos
     for(i=1;i<=5;i++)
     for(j=1;j<=3;j++)
     {
          printf("\nINGRESE LA CALIFICACION cal[%d][%d]", i,j);
          scanf("%d", cal[i][j]);
     }
      //Salida de datos
     for(i=1;i<=5;i++)
     {
          printf("\n");                
          for(j=1;j<=3;j++)
                printf(" %d ", cal[i][j]);
          
     }

          system("PAUSE");
}
      
