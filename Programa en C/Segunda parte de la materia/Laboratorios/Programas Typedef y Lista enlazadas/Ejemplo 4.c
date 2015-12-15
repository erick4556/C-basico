#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct nodo
{
	char dato;
	struct nodo *enlace;
}LISTA;

void mostrar_lista(LISTA *ptr);
int buscar_en_lista(LISTA *ptr, char item);

main()
{
	LISTA *n1, *n2, *n3, *n4;
	char item;
	int encontrado;
	n1=malloc(sizeof(LISTA));
	n2=malloc(sizeof(LISTA));
	n3=malloc(sizeof(LISTA));
	n4=malloc(sizeof(LISTA));
	
	n1->dato='a';
	n1->enlace =n2;
	n2->dato='b';
	n2->enlace=n3;
	n3->dato='c';
	n3->enlace=n4;
	n4->dato='d';
	n4->enlace=NULL;
	
	printf("La lisla enlazada es como sigue: ");
	mostrar_lista(n1);
	printf("Introduzca un caracter a buscar en la lista: ");
	item=getchar();
	encontrado=buscar_en_lista(n1,item);
	printf("\n El caracter %c ",item);
	encontrado ? printf(" ha ") : printf(" no ha ");
	printf("sido encontrado en la lista: ");
	mostrar_lista(n1);
}

void mostrar_lista(LISTA *ptr)
{
	while(ptr !=NULL)
	{
		printf("%c", ptr->dato);
		ptr=ptr->enlace;
	}
	printf("\n");
}

int buscar_en_lista(LISTA *ptr, char item)
{
	if(ptr==NULL)
	return(0);
	else
	{
		do
		{
			if(ptr->dato==item)
			return(1);
			ptr=ptr->enlace;
		} while(ptr!=NULL);
		return(0);
	}
}
