/* Faça uma função `maior_vet()`que receba um vetor float, um número inteiro, e retorne o maior elemento do vetor.

    Autor: André Cunha - Engenharia de produção 4p
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

    // Chama a função
    printf("\nO maior elemento eh: %.2f !\n", maior_vet(vet, tam_vet));

    printf("\nFIM DO PROGRAMA!\n");
    return 0;
}
