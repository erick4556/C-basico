#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
	char dato;
	struct nodo *enlace;
	
}LISTA;

void mostrar_lista(LISTA *ptr);
void insertar(LISTA **ptr, char elemento);

main()
{
	LISTA *n1 =NULL;
	char elemento;
	
	do
	{
		printf("\nIntroduzca elemento: ");
		elemento=getchar();
		if(elemento != '\r')
			insertar(&n1, elemento);
	}while (elemento != '\r');
		printf("\nLa nueva lista enlazada es: ");
		mostrar_lista(n1);
}
	void mostrar_lista(LISTA *ptr)
	{
		while(ptr != NULL)
		{
			printf("%c",ptr->dato);
			ptr= ptr->enlace;
		}
		printf("\n");
	}
	
	void insertar (LISTA **ptr, char elemento)
	{
		LISTA *p1, *p2;
		p1= *ptr;
		if(p1==NULL)
		{
				p1=malloc(sizeof(LISTA));
				if(p1 != NULL)
				{
					p1->dato= elemento;
					p1->enlace = NULL;
					*ptr=p1;
				}
		}else
		{
			while(p1->enlace != NULL)
					p1= p1->enlace;
			p2= malloc(sizeof(LISTA));
			if(p2!=NULL)
			{
				p2->dato= elemento;
				p2->enlace=NULL;
				p1->enlace=p2;
			}
		}
	}


