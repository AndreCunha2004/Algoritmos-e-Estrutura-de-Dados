/* Este � um programa que mostra todos os numeros impares positivos menores que 1000.
    Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Loo�p de repeticao de 0 at� 1000
    for(int i=1; i<1000; i++){
    // Verifica se num � impar
        if(i%2!=0)
            printf("%i\n", i);
        else
            continue;
    }
    return 0;
}
