/* Este programa recebe um numero par, e
    se recebe um numero impar, repete at� receber um par.

        Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Loop ocndicional para numeros pares
    do{
        printf("Digite um numero par: ");
        scanf("%d", &n);

        // verifica se o numero � impar e imprime na tela o erro
        if(n%2 != 0)
            printf("%d eh impar! tente novamente...\n", n);

    }while(n%2 != 0); // condi��o do loop

    printf("\n");

    // Imprime o resultado
    printf("%d eh par!\n", n);
    return 0;
}
