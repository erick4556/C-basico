#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int M1, M2,c1, c2,i;
    printf("ESCRIBE DOS MESES:  ");
    scanf( "%d %d" , &M1, &M2 );
   
    for(c1=0,i=1; i<=M1; i++) 
      if(M1%i==0)
      c1++;
    
    for(c2=0,i=1; i<=M2; i++) 
      if(M2%i==0)
      c2++;
      
    if(c1==2&&c2==2&&fabs(M1-M2)==2) 
      printf("%d y %d son primos gemelos\n",M1,M2); 
   
    else
      printf("%d y %d NO son primos gemelos\n",M1,M2);
      
}
