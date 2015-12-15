#include <stdio.h>
#include <stdlib.h>
FILE *archivo;
char nombre[20];
char fecha[20];
int puntos;
int main()
{
    archivo = fopen("archivo.txt", "r");
    if( archivo == NULL)
    {
        printf("Error al abrir archivo");
        return 0;
    }
    while( ! feof(archivo))
    {
        fscanf(archivo, "%s %i %s\n", nombre, &puntos, fecha);
        printf("\nNombre: %s \nPuntos: %i \nFecha: %s", nombre, puntos, fecha);
    }
    fclose(archivo);
    printf("\n");
    system("pause");	
    return 0;
}
