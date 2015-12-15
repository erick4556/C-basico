#include<stdio.h>
#include <conio.h>
#define MAX 10
int main()
{
  int matrizA[MAX][MAX], col, fil, i, j;
  int matrizB[MAX][MAX], aux=0;
    printf("Cuantas columnas quieres ");
    scanf("%d", &col);
    printf("Cuantos filas quieres ");
    scanf("%d", &fil);
    for(i = 0;i <fil;i++)/*RUTINA PARA LEER LOS DATOS*/
    {
        for(j = 0;j < col;j++){
            printf("ESCRIBE LOS VALORES [%d][%d]==>\t", i+1, j+1);
                scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n\n\t\tMatriz original");/*RUTINA PARA IMPRIMIR*/
    printf("\n\n"); 
    for(i = 0;i <fil;i++){
        printf("\n\t\t");
        for(j = 0;j < col;j++){
            printf("  %6d  ", matrizA[i][j]);
            }
    }
    for(i = 0;i <fil;i++){
    for(j = 0;j < col;j++){
          aux=3-i;
          matrizB[aux][j]=matrizA[i][j];
          }
    }          
    printf("\n\n\t\tMatriz Resultante");/*RUTINA PARA IMPRIMIR*/
    printf("\n\n"); 
    for(i = 0;i <fil;i++){
        printf("\n\t\t");
        for(j = 0;j < col;j++){
            printf("  %d  ", matrizB[i][j]);
            }
    }
    printf("\n\n\n");
    system("pause");
      }
