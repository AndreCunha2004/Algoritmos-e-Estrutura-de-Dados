/* Fa�a uma fun��o `maior2()` que receba dois n�meros reais e retorne o maior deles.

    Autor: Andr� Cunha - Engenharia de Produ��o 4p
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

    // Chama a fun��o
    printf("O maior numero eh: %.2f!\n", maior2(n1,n2));

    printf("\nFIM DO PROGRAMA\n");

    return 0;
}
