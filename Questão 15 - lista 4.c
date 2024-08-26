/* Faça um programa que leia 10 números positivos e exiba em
    tela o menor valor, o maior valor e a média. Utilize o
    comando for.

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior=0, menor=0;   // menor é declarado como 1 para incluir o caso de forem digitados apenas numeros acima de zero.
    int i=0; // o contador precisa ser exibido fora do for.

    printf("Digite o 1-numero: ");
    scanf("%i", &n);

    maior = menor = n;
    float sum=n;

    // Loop para leitura das variáveis
    for(i=1; i<10; i++){
        printf("Digite o %d-numero: ", i+1);
        scanf("%i", &n);

        // Acumula a soma
        sum+=n;

        // Verifica se é o maior
        if(maior<n)
            maior=n;

        // Verifica se é o menor
        if(n<menor)
            menor=n;
    }

    // Imprime o resultado
    printf("\n");
    printf("RESULTADO:\n");
    printf("\n");
    printf("Maior numero = %i\n", maior);
    printf("Menor numero = %i\n", menor);
    printf("Media = %f\n", sum/i);

    return 0;
}
