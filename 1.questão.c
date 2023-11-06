#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float temperatura;

    printf("Informe a temperatura atual da sua região: ");
    scanf("%f", &temperatura);

    system("cls");

    if (temperatura > 25)
    {
        printf("Clima alternado para ensolarado");
    }
    else if (temperatura >= 15)
    {
        printf("Clima alternado para nublado");
    }
    else
    {
        printf("Clima alternado para chuvoso");
    }

    return 0;
}