/* Este programa recebe um inteiro N e, em seguida,
    imprime os n primeiros inteiros naturais ímpares.
        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Leitura das variáveis
    printf("Digite um numero: ");
    scanf("%i",&n);

    // Loop de repetição que verifica os numeros impares
    for(int i=0; i<n; i++){
        if(i%2!=0){
            printf("- %i ",i);
        }
    }

    return 0;
}
