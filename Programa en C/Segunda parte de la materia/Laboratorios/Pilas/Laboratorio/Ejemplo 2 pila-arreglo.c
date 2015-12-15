#include <stdio.h>
#include <stdlib.h>

main() 
{
       int i=0 , pila[3], top, n;
       while (i<4)
       {
             printf("1. Agregar, 2. Listar, 3. Fin.");
             scanf("%d", &n);
       
             switch(n)
             {
                case 1: printf("Introduzca un número: "); scanf("%d", &pila[i]); getchar(); i+=1; break;
                case 2: for(i=i;i<=0;i-1)printf("%d", pila[i]); break;
                case 3: exit(0);
                default: puts("\nSaliendo del programa...");
             }
       }
}
