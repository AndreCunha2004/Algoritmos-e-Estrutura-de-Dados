/* Fa�a uma fun��o `volume cilindro()`que receba como par�metros a altura e o raio de um cilindro circular e exiba em tela o
volume do cilindro.

    Autor: Andr� Cunha - Engenharia de Produ��o 4p
*/
#include <stdio.h>
#include "volumebib.h"

int main()
{
    float h,r;

    printf("---------------------------------\n");
    printf("Descubra o volume do cilindro!\n");
    printf("---------------------------------\n\n");

    //Leitura dos valores
    printf("Digite a altura (h) do cilindro: ");
    scanf("%f", &h);
    printf("Digite o raio (r) do cilindro: ");
    scanf("%f", &r);
    printf("\n");

    // Chama a fun��o
    volume_cilindro(h,r);

    printf("FIM DO PROGRAMA!\n");
    return 0;
}
