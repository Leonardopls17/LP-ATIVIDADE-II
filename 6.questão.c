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
    printf("(1 - Camiseta, 2 - Calça, 3 - Sapato)\n");
    printf("Selecione seu produto: ");
    scanf("%d", &Idioma);

    system("cls");
    
    switch (Idioma)
    {
    case 1:

        printf("Produto: Camiseta\n");
        printf("Valor: R$ 50,00\n");
        break;
    case 2:
        printf("Produto: Calça\n");
        printf("Valor: R$ 100,00\n");
        break;
    case 3:
        printf("Produto: Sapato\n");
        printf("Valor: R$ 250,00\n");
        break;
    default:
        printf("Produto não identificado.");

        break;
    }

    return 0;
}