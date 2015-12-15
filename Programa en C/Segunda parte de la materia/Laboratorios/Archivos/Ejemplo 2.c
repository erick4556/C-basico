#include <stdio.h>
#include <conio.h>
// file como puntero
FILE *file;
char c;
// Funciones
void escribir();
void leer();
int main(int argc, char *argv[])
{
    //printf("Hola amiguitos... Soy erick\n")
	printf("Escribiendo archivo...\n\n");
    escribir();
    printf("Leyendo archivo...\n\n");
    leer();
    system("pause");
    return 0;
}
void escribir()
{    
    file = fopen("archivo.txt", "w");
    if(file == NULL)
    {
        printf("Error al abrir archivo.. ");
    }
    fprintf(file, "Hola Amigos\n");
    fclose(file);      
}
void leer()
{
    file = fopen(", ","r");
    if(file == NULL)
    {
        printf("Error al abrir archivo Lo sentimos.. Att. Erick\n");
    }
    while((c=fgetc(file))!=EOF){
        printf("%c",c);
    }
    fclose(file);
}
