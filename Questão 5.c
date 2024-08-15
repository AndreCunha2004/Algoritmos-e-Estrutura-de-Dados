// Este programa recebe os seguintes valores de uma PA: começo, razão e quantas vezes repetirá e imprime o valor final.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, rz, n;

    // Leitura da variavel
    printf("Digite o primeiro termo da PA: ");
    scanf("%i", &inicio);
    printf("\n");

    printf("Digite a razao da PA: ");
    scanf("%i", &rz);
    printf("\n");

    printf("Digite um numero N para concluir a PA: ");
    scanf("%i", &n);
    printf("\n");

    for(int i=0; i<=n; n--){
        inicio+=rz;
    }
    printf("O enessimo numero eh: %i.\n",inicio);
    return 0;
}
