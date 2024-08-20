/* Este é um programa que mostra todos os numeros impares positivos menores que 1000.
    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Loo´p de repeticao de 0 até 1000
    for(int i=1; i<1000; i++){
    // Verifica se num é impar
        if(i%2!=0)
            printf("%i\n", i);
        else
            continue;
    }
    return 0;
}
