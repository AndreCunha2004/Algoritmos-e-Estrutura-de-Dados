/* Este programa lê do usuário um número inteiro x e um inteiro não-negativo n,
calcule x n sem o uso da função pow( ) e exiba o resultado em tela.

        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x, res;

    // Leitura
    printf("Digite X: ");
    scanf("%d", &x);

    printf("Digite N: ");
    scanf("%d", &n);

    // Condicional
    if(x>=0 && n>0)

        for(int i=1; i<=n; i++){ // Loop p/ repetir a multiplicação N vezes
            res= x*i;
        }

    // Imprime o resultado
    printf("%d^%d = %d !\n", x,n,res);

    return 0;
}
