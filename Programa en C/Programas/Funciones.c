#include <stdio.h>
#include <conio.h>
int oli(int a, int b);
void saludos ();

main(){
	int num1,num2;
	printf("Ingrese los numeros\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	 printf("%d",oli(num1,num2));
	saludos();
	
	getch();
	
}

int oli(int a, int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}

void saludos ()
{
	printf("\nHola amiguitos");
}
