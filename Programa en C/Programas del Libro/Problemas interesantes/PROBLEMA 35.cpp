
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int N1, N2,c1, c2,i;
    printf("ESCRIBE DOS NUMEROS:  ");
    scanf( "%d %d" , &N1, &N2 );
   
    for(c1=0,i=1; i<=N1; i++) 
      if(N1%i==0)
      c1++;
    
    for(c2=0,i=1; i<=N2; i++) 
      if(N2%i==0)
      c2++;
      
    if(c1==2&&c2==2&&fabs(N1-N2)==2) 
      printf("%d y %d son primos gemelos\n",N1,N2); 
   
    else
      printf("%d y %d NO son primos gemelos\n",N1,N2);
   
    system( "pause" );
}
