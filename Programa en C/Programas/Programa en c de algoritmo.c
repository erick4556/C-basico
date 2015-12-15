/* Este codigo ha sido generado por el modulo psexport 20150626-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main(void) {
	int num;
	printf("Leer numero entero\n");
	scanf("%i",&num);
	if ((num<25 || num>50)) {
		printf(" No esta en el intervalo de [25,50]\n");
	}
	getch();
}

