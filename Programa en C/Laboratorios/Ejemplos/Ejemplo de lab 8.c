//Problema 16 del libro.

#include <stdio.h>
#include <conio.h>
main()
{
int i,j,suma=0;
int m[4][4];
//ENTRADA DE DATOS PROBLEMA 16
for(i=0; i<=3; i++){
for(j=0; j<=3; j++)
      m[i][j]=0;
}         


for(i=0; i<=3; i++){
      m[i][i]=1;
      suma+=m[i][i];
}

//SALIDA DE DATOS
system("cls");
printf("          MATRIZ IDENTIDAD\n\n\n");
for(i=0;i<=3;i++){
    printf("\n\n");
for(j=0;j<=3;j++)
printf(" %d  ", m[i][j]);
}
 printf("\n\n");
 printf("Suma =  %d\n\n", suma);
 system("PAUSE");


}
