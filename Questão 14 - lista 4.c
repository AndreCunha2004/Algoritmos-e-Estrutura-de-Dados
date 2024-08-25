/* Este  programa pede ao usuário N valores. Some estes valores e apresente o resultado em tela.

        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0, aux;

    // Leitura da variavel
    printf("Digite a qtd de vezes: ");
    scanf("%d", &n);
    printf("\n");

    // Condicional p/ numero >= zero
    if(n >= 0){

        // Comando for
        for(int i=0; i<n; i++){
            printf("Digite o %d-numero: ", i+1);
            scanf("%d", &aux);

            sum+=aux; // Acumulador de valores
        }
        printf("SOMA DOS %d numeros = %d!", n,sum);
        printf("\n\n");
    }
    else
        printf("Numero invalido...\n");

    return 0;
}
