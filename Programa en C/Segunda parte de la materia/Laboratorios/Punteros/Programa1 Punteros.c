#include  <stdio.h>

main(void){
	
	int b=5;
	int*puntero1;
	puntero1=&b;//Ahora apunta a b.
	
	
	
	printf("b : %d\n",b);
	printf("puntero1 : %d\n",*puntero1);
	printf("puntero1 : %d\n",puntero1);
	getch();
}

