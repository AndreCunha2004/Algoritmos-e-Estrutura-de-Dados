/* Fa�a uma fun��o `quadrado()` que receba um n�mero inteiro e retorne o seu quadrado.

    Autor: Andr� Cunha - Engenharia de Produ��o 4p
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

    // Chama a fun��o
    printf("%i^2 = %i\n", n, quadrado(n));

    printf("\nFIM DO PROGRAMA!\n");
    return 0;
}
