/*  Este programa deve executar os seguintes passos:
a) Atribuir números inteiros aleatórios de 0 a 500 para preencher os 100 elementos do vetor A;
b) Mostrar na tela os elementos do vetor A separados por vírgula.

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam_vet 3

int main()
{
    int vet_a[tam_vet];
    int i;
    srand(time(NULL));

    for(i=0; i<tam_vet; i++){
         vet_a[i]=rand()%501;
         printf("%i, ", vet_a[i]);
    }

    return 0;
}
