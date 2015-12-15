#include<stdio.h>
#define MAX 10
int main(int argc, char** args)
{
  int matriz[MAX][MAX], col, fil, i=0, j=0;
    printf("Cuantas columnas quieres ");
    scanf("%d", &col);
    printf("Cuantos filas quieres ");
    scanf("%d", &fil);
    for(i = 0;i <fil;i++)/*RUTINA PARA LEER LOS DATOS*/
    {
        for(j = 0;j < col;j++){
            printf("ESCRIBE LOS VALORES [%d][%d]==>\t", i+1, j+1);
                scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n\n\t\tMatriz original");/*RUTINA PARA IMPRIMIR*/
    printf("\n\n"); 
    for(i = 0;i <fil;i++){
        printf("\n\t\t");
        for(j = 0;j < col;j++){
            printf("  %6d  ", matriz[i][j]);
            }
    }
    printf("\n\n\t\tMatriz transpuesta");/*IMPRIMIR MATRIZ TRANSPUESTA*/
    printf("\n\n");
    for(i = 0;i < col;i++){
        printf("\n\t\t");
        for(j = 0;j < fil;j++){
           printf("  %6d  ", matriz[j][i]);
            }
    }
    printf("\n\n\n");
      }
