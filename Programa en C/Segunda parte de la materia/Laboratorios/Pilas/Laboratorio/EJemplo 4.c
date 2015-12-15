#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct nodo
{
	char dato;
	struct nodo *enlace;
}PILA;

void mostrar_pila(PILA *ptr);
int vacia(PILA *ptr);
void introducir(PILA **ptr, char item);
void extraer(PILA **ptr, char *item);

main()
{
	PILA *pila=NULL;
	char item;
	
	introducir(&pila, 'a');
	introducir(&pila, 'b');
	introducir(&pila, 'c');
	
	printf("La pila es como sigue: ");
	mostrar_pila(pila);
	extraer(&pila, &item);
	printf("\nEl primer elemento obtenido es %c\n",item);
	extraer(&pila,&item);
	printf("\nEl segundo elemento obtenido es %c\n",item);
	extraer(&pila,&item);
	printf("\nEl tercer elemento obtenido es %c\n",item);
	extraer(&pila,&item);
}

void mostrar_pila(PILA *ptr)
{
	while(ptr!=NULL)
	{
		printf("%c",ptr->dato);
		ptr=ptr->enlace;
	}
	printf("\n");
}

int vacia(PILA *ptr)
{
	if(ptr==NULL)
		return(1);
	else
		return(0);
}

void introducir(PILA **ptr, char item)
{
	PILA *p;
	if(vacia(*ptr))
	{
		p=malloc(sizeof(PILA));
		if(p!=NULL)
		{
			p->dato=item;
			p->enlace=NULL;
			*ptr=p;
		}
	}
	else
	{
		p=malloc(sizeof(PILA));
		if(p!=NULL)
		{
			p->dato=item;
			p->enlace=*ptr;
			*ptr=p;
		}
	}
}

void extraer(PILA **ptr, char *item)
{
	PILA *p1;
	p1=*ptr;
	if(vacia(p1))
	{
		printf("Error! La pila esta vacia. \n");
		*item='\0';
	}
	else
	{
		*item=p1->dato;
		*ptr=p1->enlace;
		free(p1);
	}
}
