#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct nodo
{
	char dato;
	struct nodo *enlace;
}LISTA;

void mostrar_lista(LISTA *ptr);
void insertar_al_principio(LISTA **ptr, char item);
void insertar_al_final(LISTA *ptr, char item);

main()
{
	LISTA *n1, *n2, *n3;
	n1 = malloc(sizeof(LISTA));
	n2=malloc(sizeof(LISTA));
	n3=malloc(sizeof(LISTA));
	
	n1->dato='c';
	n1->enlace=n2;
	n2->dato='a';
	n2->enlace=n3;
	n3->dato='t';
	n3->enlace=NULL;
	
	printf("La lista enlazda es como sigue: ");
	mostrar_lista(n1);
	insertar_al_principio(&n1, 's');
	printf("La nueva lista enlazada es: ");
	mostrar_lista(n1);
	insertar_al_final(&n1, 'm');
	printf("La nueva lista enlazada es: ");
	mostrar_lista(n1);
}

void mostrar_lista(LISTA *ptr)
{
	while(ptr !=NULL){
		printf("%c",ptr->dato);
		ptr=ptr->enlace;
	}
	printf("\n");
}

void insertar_al_principio(LISTA **ptr, char item)
{
	LISTA *new;
	
	new=malloc(sizeof(LISTA));
	if(new!=NULL)
	{
		new->dato=item;
		new->enlace=*ptr;
		*ptr=new;
	}
}

void isertar_al_final(LISTA *ptr, char item)
{
	LISTA *new;
	while(ptr->enlace!=NULL)
	ptr=ptr->enlace;
	new=malloc(sizeof(LISTA));
	if(new!=NULL)
	{
		ptr->enlace=new;
		new->dato=item;
		new->enlace=NULL;
	}
}
