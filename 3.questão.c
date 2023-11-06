#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float Nota;

    printf("Digite uma nota: ");
    scanf("%f", &Nota);

    system("cls");

    if (Nota >= 9)
    {
        printf("Excelente");
    }
    else if (Nota >= 7)
    {
        printf("Bom");
    }
    else if (Nota >= 5)
    {
        printf("Razoável");
    }
    else
    {
        printf("Insuficiente");
    }

    return 0;
}