#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int number = 0;

    printf("Digite um número: ");
    scanf("%d", &number);

    system("cls");

    do
    {

        number--;

        switch (number)
        {
        case 200:
            printf("Número altissimo \n");
            sleep(1);
            break;
        case 175:
        case 150:
        case 125:
        case 100:
            printf("Falta muito\n");
            sleep(1);
            break;
        case 75:
            printf("Está bem perto \n");
            sleep(1);
            break;
        case 50:
            printf("Está perto \n");
            sleep(1);
            break;
        case 30:
            printf("Falta 30 ainda \n");
            sleep(1);
            break;
        case 20:
            printf("Finalizando \n");
            sleep(1);
            break;
        case 10:
            printf("%d \n", number);
            sleep(1);
            break;
        case 9:
            printf("%d \n", number);
            sleep(1);
            break;
        case 8:
            printf("%d \n", number);
            sleep(1);
            break;
        case 7:
            printf("%d \n", number);
            sleep(1);
            break;
        case 6:
            printf("%d \n", number);
            sleep(1);
            break;
        case 5:
            printf("%d \n", number);
            sleep(1);
            break;
        case 4:
            printf("%d \n", number);
            sleep(1);
            break;
        case 3:
            printf("%d \n", number);
            sleep(1);
            break;
        case 2:
            printf("%d \n", number);
            sleep(1);
            break;
        case 1:
            printf("%d \n", number);
            sleep(1);
            break;
        }
    } while (number > 0);

    printf("FIM!");

    getchar();
    return 0;
}
