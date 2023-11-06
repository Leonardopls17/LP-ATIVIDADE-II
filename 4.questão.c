#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int Idade;

    printf("Informe sua idade: ");
    scanf("%d", &Idade);

    system("cls");

    if (Idade >= 18)
    {
        printf("Acesso permitido.");
    }
    else
    {
        printf("Acesso Negado.");
    }

    return 0;
}