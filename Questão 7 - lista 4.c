/* Este programa recebe um inteiro N e, em seguida,
    imprime os n primeiros inteiros naturais �mpares.
        Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Leitura das vari�veis
    printf("Digite um numero: ");
    scanf("%i",&n);

    // Loop de repeti��o que verifica os numeros impares
    for(int i=0; i<n; i++){
        if(i%2!=0){
            printf("- %i ",i);
        }
    }

    return 0;
}
