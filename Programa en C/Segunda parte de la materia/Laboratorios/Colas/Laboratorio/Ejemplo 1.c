#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct nodo
{
	char dato;
	struct nodo *enlace;
}COLA;

void mostrar_cola(COLA *ptr);
int vacia(COLA *ptr);
void encolar (COLA **cabeza, char item);
void desencolar(COLA **cabeza, char *item);

main()
{
	COLA *cabeza=NULL;
	char item;
	
	encolar(&cabeza, 'a');
	encolar(&cabeza, 'b');
	encolar(&cabeza, 'c');
	printf("La cola es como sigue: ");
	mostrar_cola(cabeza);
	desencolar(&cabeza, &item);
	printf("\nEl primer elemento obtenido de la cola es %c\n",item);
	desencolar(&cabeza, &item);
	printf("\nEl segundo elemento obtenido de la cola es %c\n",item);
	desencolar(&cabeza, &item);
	printf("\nEl tercer elemento obtenido de la cola es %c\n",item);
	desencolar(&cabeza, &item);
}

void mostrar_cola(COLA *ptr)
{
	while(ptr!=NULL)
	{
		printf("%c",ptr->dato);
		ptr=ptr->enlace;
	}
	printf("\n");
}
int vacia(COLA *ptr)
{
	if(ptr==NULL)
		return(1);
	else
		return(0);
}

void encolar(COLA **cabeza, char item)
{
	COLA *p;
	p=malloc(sizeof(COLA));
	if(p!=NULL)
	{
		p->dato=item;
		p->enlace=*cabeza;
		*cabeza=p;
	}
}

void desencolar(COLA **cabeza, char *item)
{
	COLA *p1, *p2;
	p1=*cabeza;
	if(vacia(p1))
	{
		printf("Eror! La cola esta vacia. \n");
		*item='\0';
	}
	else
	{
		p2=*cabeza;
		while(p2->enlace!=NULL)
		{
			p1=p2;
			p2=p2->enlace;
		}
		*item=p2->dato;
		p1->enlace=NULL;
		free(p2);
		if(p1==p2)
			*cabeza=NULL;
	}
}
