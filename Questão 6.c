// Este  programa recebe a quantidade de notas de cada determinado valor e faz o calculo do total.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor[7]={2,5,10,20,50,100,200};
    int quantidade[7];
    float total=0.0;

    // Loop de repetição para leitura do valor(i) e quantidade (j):
    for(int i=0; i<7; i++){

        printf("Digite a quantidade de notas de R$%.2f: ", valor[i]);
        scanf("%i", &quantidade[i]);
        printf("\n");

        // Acumula o total de valores recebidos
        total += valor[i]*quantidade[i];

    }
    printf("Valor total: %.2f\n", total);

    return 0;
}
