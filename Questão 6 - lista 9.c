/* Fa�a uma fun��o `quadrado_perfeito()` para verificar se um n�mero � um quadrado perfeito.

IMPORTANTE: Um quadrado perfeito � um n�mero inteiro n�o negativo que pode ser expresso como o
quadrado de outro n�mero inteiro. Ex: 1, 4, 9, etc. A fun��o dever� receber um n�mero real e,
se o n�mero for um quadrado perfeito, dever� exibir em tela a mensagem �Quadrado
perfeito�, caso contr�rio dever� exibir �N�o � um quadrado perfeito�.

    Autor: Andr� Cunha - Engenharia de Produ��o 4p
*/
#include <stdio.h>
#include "quadbib.h"

int main()
{
    float num;

    printf("----------------------------------------------------\n");
    printf("Confira os numeros que sao quadrados perfeitos!\n");
    printf("----------------------------------------------------\n");

    // Leitura do numero
    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("\n");

    // Chama a fun��o
    quadrado_perfeito(num);

    printf("\nFIM DO PROGRAMA\n");
    return 0;
}
