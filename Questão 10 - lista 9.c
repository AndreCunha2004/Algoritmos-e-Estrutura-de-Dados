/* Fa�a uma fun��o `maior_vet()`que receba um vetor float, um n�mero inteiro, e retorne o maior elemento do vetor.

    Autor: Andr� Cunha - Engenharia de produ��o 4p
*/
#include <stdio.h>
#include "bib10.h"
#define tam_vet 3

int main()
{
    float vet[tam_vet];
    int i;

    printf("----------------\n");
    printf("   QUESTAO 10!\n");
    printf("----------------\n");

    // Preenchendo o vetor:
    for(i = 0; i < tam_vet; i++){
        printf("Digite o elemento vet[%i]: ", i);
        scanf("%f", &vet[i]);
    }

    // Chama a fun��o
    printf("\nO maior elemento eh: %.2f !\n", maior_vet(vet, tam_vet));

    printf("\nFIM DO PROGRAMA!\n");
    return 0;
}
