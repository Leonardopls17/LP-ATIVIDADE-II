#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float NumberNotas;
    float sum=0;
    int i;
    float Notas;
    float avarage;


    printf("Deseja inserir quantas notas? ");
    scanf("%f", &NumberNotas);
    
    system("cls");

    for (i = 1; i <= NumberNotas; i++)
    {
        printf("Digite a %d Nota: ", i);
        scanf("%f", &Notas);
            sum += Notas;
    }
    avarage = sum / NumberNotas;
    
    system("cls");

    printf("Media de notas: %.2f", avarage);
    return 0;
}