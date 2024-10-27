#include <stdio.h>
#include "bib9.h"

int main()
{
    float n1, n2, n3;

    printf("----------------\n");
    printf("   QUESTAO 9!\n");
    printf("----------------\n");

    // Leitura dos números
    printf("\nDigite o 1-numero: ");
    scanf("%f", &n1);

    printf("Digite o 2-numero: ");
    scanf("%f", &n2);

    printf("Digite o 3-numero: ");
    scanf("%f", &n3);
    printf("\n");

    if(maior3(n1,n2,n3) == 3.14)
        printf("Os numeros sao iguais.\n");
    else // Chama a função
        printf("O maior numero eh: %.2f!\n", maior3(n1,n2,n3));

    printf("\nFIM DO PROGRAMA!\n");
    return 0;
}
