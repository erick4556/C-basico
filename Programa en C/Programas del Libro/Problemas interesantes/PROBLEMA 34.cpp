#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      int i,j,n;
     
      printf("Ingresar numero: ");
      scanf ("%d",&n);
      int primos[n];

      for (i=0; i<n;primos[i]=i+2,i++);

      for (i = 0; i<n; i++)

          if (primos[i]!=-1)
    
              for (j=i+1; j<n;j++)
        
                  if (primos[j] % primos[i] == 0)

                     primos[j] = -1;

      printf("Numeros Primos:\n");

      for(i=0;i<n;i++) 
      
           if ( primos[i]!=-1)
               printf("%i\t",primos[i]);
      system ("pause");
      }
