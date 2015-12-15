/*30- Escriba un programa que lea un número romano e imprima su equivalente en arábigo.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 main()
{   
	char r[20];
    int x,num=0,A[20]={0};
    printf("Dame Un Numero Romano: ");
    scanf("%s",&r);
    for(x=0;x<strlen(r);x++)// EL strln se utiliza para obtener la longitud de una cadena de caracteres. Para eso es la libreria #include <string.h>.
    {   switch(r[x])
        {   case 'I':
            case 'i':
                A[x]=1;
            break;
            case 'V':
            case 'v':
                A[x]=5;
            break;
            case 'X':
            case 'x':
                A[x]=10;
            break;
            case 'L':
            case 'l':
                A[x]=50;
            break;
            case 'C':
            case 'c':
                A[x]=100;
            break;
            case 'D':
            case 'd':
                A[x]=500;
            break;
            case 'M':
            case 'm':
                A[x]=1000;
            break;
            default:
            {   printf("\nEl Numero No Es Valido\n");
                return(-1);
                break;
            }
        }
    }
    for(x=0;x<strlen(r);x++)
    {   if(A[x]<A[x+1])
            num=num-A[x];
        else
            num=num+A[x];
    }
    printf("\nEl Numero %s Es: %d\n",r,num);
}
