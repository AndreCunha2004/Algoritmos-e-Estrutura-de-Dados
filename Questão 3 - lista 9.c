/* Fa�a uma fun��o 'mes', receba como par�metro um n�mero inteiro correspondente a um m�s do ano e exiba em tela
o m�s correspondente por extenso. Caso o n�mero recebido esteja fora do intervalo de 1 a 12, dever� ser
exibida uma mensagem informando que o n�mero � inv�lido. Exemplo: 1 = �janeiro�.

    Autor: Andr� Cunha - Engenharia de Produ��o 4p

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
