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

    printf("C�digo de acesso gerado: %d\n", random);
    
    getchar();

    system("cls");

    do{
        
        printf("Digite seu c�digo de acesso:");
        scanf("%d", &codigo);

       if(codigo != random){
        printf("C�digo inv�lido\n");
        printf("Digite seu c�digo de acesso:");
        scanf("%d", &codigo);
       }
    } while (codigo != random);

    printf("Acesso permitido");

        return 0;
}