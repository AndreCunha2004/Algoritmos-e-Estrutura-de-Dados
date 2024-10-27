/* Faça uma função `quadrado()` que receba um número inteiro e retorne o seu quadrado.

    Autor: André Cunha - Engenharia de Produção 4p
*/
#include <stdio.h>
#include "bib7.h"
int main()
{
    int n;

    printf("----------------\n");
    printf("QUESTAO 7!\n");
    printf("----------------\n");

    // Leitura do numero
    printf("\nDigite um numero: ");
    scanf("%i", &n);
    printf("\n");

    // Chama a função
    printf("%i^2 = %i\n", n, quadrado(n));

    printf("\nFIM DO PROGRAMA!\n");
    return 0;
}
