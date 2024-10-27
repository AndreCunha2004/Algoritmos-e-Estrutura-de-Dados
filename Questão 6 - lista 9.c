/* Faça uma função `quadrado_perfeito()` para verificar se um número é um quadrado perfeito.

IMPORTANTE: Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o
quadrado de outro número inteiro. Ex: 1, 4, 9, etc. A função deverá receber um número real e,
se o número for um quadrado perfeito, deverá exibir em tela a mensagem “Quadrado
perfeito”, caso contrário deverá exibir “Não é um quadrado perfeito”.

    Autor: André Cunha - Engenharia de Produção 4p
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

    // Chama a função
    quadrado_perfeito(num);

    printf("\nFIM DO PROGRAMA\n");
    return 0;
}
