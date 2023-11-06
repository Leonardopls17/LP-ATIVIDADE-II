#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int Idioma;

    printf("             Menu\n");
    printf("(1 - Inglês, 2 - Espanhol, 3 - Francês)\n");
    printf("Selecione seu idioma: ");
    scanf("%d", &Idioma);

    system("cls");
    
    switch (Idioma)
    {
    case 1:

        printf("Welcome.");
        break;
    case 2:
        printf("Bienvenida.");
        break;
    case 3:
        printf("Accueillir.");
        break;
    default:
        printf("Idioma não identificado.");

        break;
    }

    return 0;
}