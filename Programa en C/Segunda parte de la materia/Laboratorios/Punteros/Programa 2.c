#include <stdio.h>
main ( )
{
int u=3;
int v;
int *pu;   //Puntero a un entero.
int *pv;   //Puntero a un entero.

pu=&u;   //Asigna direccion de u a pu.
v=*pu;   //Asigna valor de u a v.
pv=&v;   //Asigna direecion de u a pv.

printf("\n u=%d      &u=%X     pu=%X     *pu=%d",u, &u, pu, *pu);

printf("\n\nv=%d      &v=%X     pv=%X     *pv=%d",v, &v, pus, *pu);

}
