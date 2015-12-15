#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct nodo
{
	char dato;
	struct nodo *enlace
}LISTA;

void mostrar_lista(LISTA *ptr);
void eliminar_por_el_principio(LISTA **ptr);
void eliminar_por_el_final(LISTA **ptr);

main()
{
	LISTA *n1, *n2, *n3, *n4;
	n1=malloc(sizeof(LISTA));
	n2=malloc(sizeof(LISTA));
	n3=malloc(sizeof(LISTA));
	n4=malloc(sizeof(LISTA));
	
	n1->dato='a';
	n1->enlace=n2;
	n2->dato='b';
	n2->enlace=n3;
	n3->dato='c';
	n3->enlace=n4;
	n4->dato='d';
	n4->enlace=NULL;
	
	printf("La lista enlazada es como sigue: ");
	mostrar_lista(n1);
	eliminar_por_el_principio(&n1);
	printf("La nueva lista enlazada es: ");
	mostrar_lista(n1);
	eliminar_por_el_final(&n1);
	printf("La nueva lista enlazada es: ");
	mostrar_lista(n1);	
}

void mostrar_lista(LISTA *ptr)
{
	while(ptr!=NULL)
	{
		printf("%c", ptr->dato);
		ptr=ptr->enlace;
	}
	printf("\n");
}

void eliminar_por_el_principio(LISTA **ptr)
{
	LISTA *p;
	p=*ptr;
	if(p !=NULL)
	{
		p=p->enlace;
		free(*ptr);
	}
	*ptr=p;
}

void eliminar_por_el_final(LISTA **ptr)
{
	LISTA *p1, *p2;
	p1=*ptr;
	if(p1!=NULL)
	{
		if(p1->enlace==NULL)
		{
			free(*ptr);
			*ptr=NULL;
		}
		else{
			while(p1->enlace != NULL)
			{
				p2=p1;
				p1=p1->enlace;
			}
			p2->enlace=NULL;
			free(p1);
		}
	}
}
