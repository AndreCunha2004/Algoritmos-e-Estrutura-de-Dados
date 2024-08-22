/* Este programa l� do usu�rio um n�mero inteiro x e um inteiro n�o-negativo n,
calcule x n sem o uso da fun��o pow( ) e exiba o resultado em tela.

        Autor: Andr� Cunha
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

        for(int i=1; i<=n; i++){ // Loop p/ repetir a multiplica��o N vezes
            res= x*i;
        }

    // Imprime o resultado
    printf("%d^%d = %d !\n", x,n,res);

    return 0;
}
