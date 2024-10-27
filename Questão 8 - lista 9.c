/* Faça uma função `maior2()` que receba dois números reais e retorne o maior deles.

    Autor: André Cunha - Engenharia de Produção 4p
*/
#include <stdio.h>
#include "bib8.h"

int main()
{
    float n1,n2;

    printf("--------------\n");
    printf("  QUESTAO 8!\n");
    printf("--------------\n");

    // Leitura dos numeros
    printf("\nDigite o 1-numero: ");
    scanf("%f", &n1);

    printf("Digite o 2-numero: ");
    scanf("%f", &n2);
    printf("\n");

    // Chama a função
    printf("O maior numero eh: %.2f!\n", maior2(n1,n2));

    printf("\nFIM DO PROGRAMA\n");

    return 0;
}
