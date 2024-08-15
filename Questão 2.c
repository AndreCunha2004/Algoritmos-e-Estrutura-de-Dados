#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[5], maior=0, menor=0;

    for(int i=0; i<5; i++){
    // Leitura da variavel
    printf("Digite o numero %i:\n", i+1);
    scanf("%i", &num[i]);
    printf("\n");

    // Verifica o maior numero
    if(num[maior]<num[i])
        maior = i;
    if(num[menor]>num[i])
        menor=i;
    }
    printf("O maior numero eh %i.\n", num[maior]);
    printf("O menor numero eh %i.\n", num[menor]);

    return 0;
}
