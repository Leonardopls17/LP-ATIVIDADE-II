#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int number;
    int i, num=479001599, div=0;


    printf("Digite um número: ");
    scanf("%d", &number);
     
    for( i=1 ; i<=num ; i++)
        if(number%i==0)
            div++;

    if(div==2)
        printf("Número primo.");
    else
        printf("Número não primo.");



    return 0;
}