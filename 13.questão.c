#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int Number1;
    int Number2;
    int Maiornumero;
    int Menornumero;

    printf("Digite o primeiro N�mero: ");
    scanf("%d", &Number1);
    printf("Digite o segundo N�mero: ");
    scanf("%d", &Number2);

    if (Number1 > Maiornumero)
        Maiornumero = Number1;
    if (Number2 < Menornumero)
        Menornumero = Number2;

    printf("Maior n�mero: %d\n", Maiornumero);
    printf("Menor n�mero: %d", Menornumero);

    return 0;
}