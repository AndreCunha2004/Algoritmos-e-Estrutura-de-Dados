/* Este programa recebe uma sequencia de numeros inteiros n�o-nulos e,
    imprime seus quadrados.

        Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    // Loop condicional para numeros n�o nao-nulos
    do{
        printf("Digite n: ");
        scanf("%d", &n);


        if(n == 0)  // Verifica se n = 0 e imprime erro
            printf("\n%d eh nulo! Tente novamente...",n);

        else if(n < 0)   // Verifica se n < 0 e imprime erro
            printf("\n%d eh negativo! Tente novamente...",n);

        else    // Verifica se n > 0 e imprime o quadrado
            printf("%d^2 = %.0f!\n", n,pow(n,2));


    }while(n > 0); // Condicional para zero e negativos fora da amostra

    printf("\n\n");
    printf("FIM\n");

    system("pause");
    return 0;
}
