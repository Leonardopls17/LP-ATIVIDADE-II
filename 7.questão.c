#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int Opcao;

    printf("      Menu\n");
    printf(" 1  NOVO JOGO\n");
    printf(" 2  CARREGAR JOGO\n");
    printf(" 3  CONFIGURA��ES\n");
    printf("Selecione uma op��o: ");
    scanf("%d", &Opcao);

    system("cls");
    
    switch  (Opcao)
    {
    case 1:

        printf("Iniciando novo jogo...\n");
        
        break;
    case 2:
        printf("Carregando mundo...\n");
        
        break;
    case 3:
        printf("Abrindo painel de configura��es.\n");
        
        break;
    default:
        printf("Op��o n�o identificada.");

        break;
    }

    return 0;
}