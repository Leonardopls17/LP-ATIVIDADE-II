#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){

    
    setlocale(LC_ALL, "portuguese");
    
    int number = 0;
    int quantityPairs = 0;
    int oddQuantity = 0;
    int sumPairs = 0;
    int oddSum = 0;
    float averagePairs = 0;
    float oddAverage = 0;


    

    do
    {
        printf("Informe o valor do número: ");
        scanf("%d", &number);

        if (number >= 0)
        {
            if (number % 2 == 0)
            {
                sumPairs += number;
                quantityPairs++;
            }
           if (number % 2 != 0)
            {
                oddSum += number;
                oddQuantity++;
            }
            
            
        }
        
    } while (number >= 0);


    averagePairs = sumPairs / (float) quantityPairs; 
    oddAverage = oddSum / (float) oddQuantity; 


    system("cls || clear");

    printf("Quantidade de números pares: %d \n", quantityPairs);
    printf("Soma dos números pares: %d \n", sumPairs);
    printf("Média dos números pares: %.2f \n ", averagePairs);  
    printf("Quantidade de números impares: %d \n", oddQuantity);
    printf("Soma dos números impares: %d \n", oddSum);
    printf("Média dos números impares: %.2f \n ", oddAverage);
    

    getchar();
    return 0;
}