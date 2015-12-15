#include<stdio.h>

char letra;
signed char letraconsigno;
unsigned char letrasinsigno;

int main(int argc, char * argv[])
{
	letra = 'A';
	printf("La letra es %c y su valor decimal es %d.\n\n",letra,letra);
	
	letraconsigno = -30;
	printf("Letra con signo es %d y su valor decimal es %d.\n\n",letraconsigno,letraconsigno);
	
	letrasinsigno = 180;
	printf("Letra sin signo es %u y su valor decimal es %d.\n\n",letrasinsigno,letrasinsigno);
	getchar();
}
