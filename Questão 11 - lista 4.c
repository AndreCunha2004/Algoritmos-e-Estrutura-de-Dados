/* Este programa recebe uma sequencia de numeros inteiros não-nulos e,
    imprime ao receber zero, imprime a soma de todos os numeros digitados.

        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma=0;

    // Loop condicional para numeros não-nulos
    do{
        printf("Digite um numero nao-nulo: ");
        scanf("%d", &n);

        // Acumula a soma
        soma+= n;

        // verifica se n é nulo
        if(n <= 0)
            printf("\nSOMA = %d !\n", soma);
    }while(n>0);    // Condicional do loop

    printf("\nFIM DO PROGRAMA!\n");

    return 0;
}
