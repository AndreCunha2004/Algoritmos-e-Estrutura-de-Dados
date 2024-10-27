/* Faça uma função 'mes', receba como parâmetro um número inteiro correspondente a um mês do ano e exiba em tela
o mês correspondente por extenso. Caso o número recebido esteja fora do intervalo de 1 a 12, deverá ser
exibida uma mensagem informando que o número é inválido. Exemplo: 1 = “janeiro”.

    Autor: André Cunha - Engenharia de Produção 4p

*/
#include <stdio.h>
#include "mesbib.h"

int main()
{
    int num;

    printf("-------------------------\n");
    printf("VERIFIQUE O MES DE HOJE!\n");
    printf("-------------------------\n\n");

    printf("Digite um numero de 1-12: ");
    scanf("%d", &num);
    printf("\n");

    mes(num);

    return 0;
}
