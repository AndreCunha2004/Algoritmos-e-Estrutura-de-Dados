/* Fa�a uma fun��o 'Soma4'que receba quatro n�meros reais como par�metro e exiba em tela o somat�rio destes
n�meros.

    Autor: Andr� Cunha - Engenharia de Produ��o 4p

*/
#include <stdio.h>
#include "soma4bib.h"

int main()
{
    float a,b,c,d;

    printf("----------------------------\n");
    printf("Preencha os 4 valores!\n");
    printf("----------------------------\n\n");

    printf("Digite o valor A: ");
    scanf("%f", &a);

    printf("Digite o valor B: ");
    scanf("%f", &b);

    printf("Digite o valor C: ");
    scanf("%f", &c);

    printf("Digite o valor D: ");
    scanf("%f", &d);

    printf("\n");

    soma4(a,b,c,d);

    printf("\nFIM DO PROGRAMA\n");

    return 0;
}
