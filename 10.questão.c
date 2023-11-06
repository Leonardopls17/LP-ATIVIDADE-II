#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float number1;
    float number2;
    char operacao;
    float sum, sub;

    printf("Digite o primeiro número: ");
    scanf("%f", &number1);
    printf("Digite o segundo número: ");
    scanf("%f", &number2);

    fflush(stdin);

    printf("Selecione a operação matemática(+/-): ");
    scanf("%c", &operacao);

    sum = number1 + number1;
    sub = number1 - number1;

    switch (operacao)
    {
    case '+':
        printf("Primeiro número: %.2f\n", number1);
        printf("Segundo número: %.2f\n", number2);
        printf("Soma: %.2f\n", sum);

        break;

    case '-':

        printf("Primeiro número: %.2f\n", number1);
        printf("Segundo número: %.2f\n", number2);
        printf("Subtração: %.2f\n", sub);
        break;
    default:
        break;
    }

    return 0;
}