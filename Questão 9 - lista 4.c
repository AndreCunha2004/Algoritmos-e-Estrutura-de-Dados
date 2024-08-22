/* Este programa recebe um numero par, e
    se recebe um numero impar, repete até receber um par.

        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Loop condicional para numeros impares
    do{
        printf("Digite um numero impar: ");
        scanf("%d", &n);

        // Verifica se o numero eh par e imprime erro
        if(n%2==0)
            printf("%d eh par! Tente novamente...\n", n);

    }while(n%2==0);  // Condicional do loop

    // Imprime o resultado
    printf("%d eh impar!\n", n);

    return 0;
}
