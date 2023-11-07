#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

   
    setlocale(LC_ALL, "portuguese");
    
    char answer[200];
    float value = 0;
    float conversion = 0;
    int code;

    

    printf("   CÓDIGO =============== TIPO DE UNIDADE DE MEDIDA \n");
    printf("\n");
    printf("     1 ======================== TEMPERATURA \n");
    printf("     2 ========================  DISTÂNCIA \n");
    printf("\n");

    printf("Informe o código desejado: ");
    scanf("%d", &code);

    switch (code)
    {
    case 1:

        printf("============= TEMPERATURA ================\n");
        printf("\n");
        printf("CÓDIGO ========================   TIPO\n");
        printf("\n");
        printf("  1 ======================= FAHRENHEIT\n");
        printf("  2 =======================   CELSIUS\n");
        printf("  3 =======================   KELVIN\n");
        printf("\n");

        printf("Informe o código desejado: ");
        scanf("%d", &code);

        switch (code)
        {
        case 1:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &value);
            printf("\n");
            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================   CELSIUS\n");
            printf("  2 =======================   KELVIN\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &code);
            switch (code)
            {
            case 1:

                conversion = (value - 32) / 1.8;

                break;

            case 2:

                conversion = ((value - 32) * (5 / 9)) + 273;

                break;

            default:

                printf("Código inválido");

                break;
            }
            break;

        case 2:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &value);
            printf("\n");
            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================   FAHRENHEIT\n");
            printf("  2 =======================   KELVIN\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &code);
            switch (code)
            {
            case 1:

                conversion = value * 1.8 + 32;

                break;

            case 2:

                conversion = value + 273;

                break;

            default:

                printf("Código inválido");

                break;
            }
            break;

        case 3:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &value);
            printf("\n");
            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================   FAHRENHEIT\n");
            printf("  2 =======================   CELSIUS\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &code);
            switch (code)
            {
            case 1:

                conversion = ((value - 273) * 1, 8) + 32;

                break;

            case 2:

                conversion = value - 273;

                break;

            default:

                printf("Código invólido");

                break;
            }
            break;

        default:
            printf("Código inválido");
            break;
        }

        break;
    case 2:

        printf("=============== DISTÂNCIA ================\n");
        printf("\n");
        printf("CÓDIGO ========================   TIPO\n");
        printf("\n");
        printf("  1 ===========================    KM\n");
        printf("  2 ===========================     M\n");
        printf("  3 ===========================    CM\n");
        printf("\n");

        printf("Informe o código desejado: ");
        scanf("%d", &code);

        switch (code)
        {
        case 1:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &value);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        M\n");
            printf("  2 =======================        CM\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &code);

            switch (code)
            {
            case 1:
                
                conversion = value * 1000;

                break;
            case 2:
            
                conversion = value * 100000;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;
        
        case 2:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &value);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        KM\n");
            printf("  2 =======================        CM\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &code);

            switch (code)
            {
            case 1:
                
                conversion = value / 1000;

                break;
            case 2:
            
                conversion = value * 100;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;
        case 3:
            printf("Informe o valor para a conversão: ");
            scanf("%f", &value);

            printf("CÓDIGO ========================   TIPO\n");
            printf("\n");
            printf("  1 =======================        KM\n");
            printf("  2 =======================        M\n");
            printf("\n");

            printf("Informe o código desejado: ");
            scanf("%d", &code);

            switch (code)
            {
            case 1:
                
                conversion = value / 100000;

                break;
            case 2:
            
                conversion = value / 100;
            
                break;
            
            default:

                printf("CÓDIGO INVÁLIDO");

                break;
            }

            break;


        default:
        
            printf("CÓDIGO INVÁLIDO");

            break;
        }
    default:
    printf("CÓDIGO INVÁLIDO");
        break;
    }


    printf("Valor Inserido: %.2f \n", value);
    printf("Conversão: %.2f \n", conversion);

    getchar();
    return 0;
}