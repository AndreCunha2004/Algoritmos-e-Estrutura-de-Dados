/* Este programa recebe inteiros A e B e mostra os inteiros de A at� B caso A<=B,
   Caso A>B exibe a condi��o de A>b.
        Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    // Leitura de A
    printf("Digite A:");
    scanf("%d", &a);
    printf("\n");

    // Leitura de B
    printf("Digite B:");
    scanf("%d", &b);
    printf("\n");

    if(a<=b)
        for(;a<=b;a++)
            printf("- %d ");
    else
        printf("A > B!\n");

    return 0;
}
