#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    
    int codigo;
    int random = rand() % 9999;

    printf("Código de acesso gerado: %d\n", random);
    
    getchar();

    system("cls");

    do{
        
        printf("Digite seu código de acesso:");
        scanf("%d", &codigo);

       if(codigo != random){
        printf("Código inválido\n");
        printf("Digite seu código de acesso:");
        scanf("%d", &codigo);
       }
    } while (codigo != random);

    printf("Acesso permitido");

        return 0;
}