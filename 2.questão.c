#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float desconto;
    float Valor;
    int DiaSemana;
    float ValorFinal;

    printf("Informe o valor da compra: ");
    scanf("%f", &Valor);
    printf("Informe se é dia da semana ou fim de semana(1/2): ");
    scanf("%d", &DiaSemana);

    ValorFinal = Valor;

    if (Valor > 100 && DiaSemana == 1)
    {
        desconto = Valor * 0.10;
        ValorFinal = Valor - desconto;

        printf("Valor total: %.2f\n", ValorFinal);
        printf("Desconto: %.2f\n", desconto);
    }
    if (Valor > 100 && DiaSemana == 2)
    {
        desconto = Valor * 0.15;
        ValorFinal = Valor - desconto;

        printf("Valor total: %.2f\n", ValorFinal);
        printf("Desconto: %.2f\n", desconto);
    }
    else
    {

        system("cls");

        printf("Não foi possível identicar se é dia de semana ou fim de semana");
    }

    return 0;
}