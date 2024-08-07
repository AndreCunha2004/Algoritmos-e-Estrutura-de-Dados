// Este programa verifica o maior numero entre os 3 lidos
#include <stdio.h>

int main()
{
    float num[3];
    int maior = 0;

    // Prompt user
    printf("Verifique o maior numero.\n\n");

    // Loop p/ leitura das variaveis
    for(int i=0; i<3; i++){

        printf("Digite o numero %i: ", i+1);
        scanf("%f", &num[i]);
        printf("\n");

        // Verifica o maior numero
        if(num[maior]<num[i]){
            maior = i;
        }
    }
    // Imprime o resultado
    printf("O maior numero eh: %.2f.\n", num[maior]);

    return 0;
}
