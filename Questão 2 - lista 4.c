/* Este programa exibe todos os numeros pares menores do que 1000.
    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<1000; i++)
        if(i%2==0)
            printf("%i - ", i);
        else
            continue;

        return 0;
}
