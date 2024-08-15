// Este programa recebe 3 numeros e os imprimme em ordem decrescente.
    // Autor: André Cunha - Engenharia de Produção - IFES Cariacica - Engenharia de Produção
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3];

    for(int i=0; i<3; i++){

        // Leitura das variáveis
        printf("Digite o numero %i: ", i+1);
        scanf("%i", &num[i]);
        printf("\n");
    }

        // Verificação e ordenação dos números em ordem
        if(num[0]>num[1] && num[1]>num[2])
        {
            printf("%i.\n", num[0]);
            printf("%i.\n", num[1]);
            printf("%i.\n", num[2]);
        }
        else if(num[1]>num[0] && num[0]>num[2])
        {
            printf("%i.\n", num[1]);
            printf("%i.\n", num[0]);
            printf("%i.\n", num[2]);
        }
        else if(num[2]>num[1] && num[1]>num[0])
        {
            printf("%i.\n", num[2]);
            printf("%i.\n", num[1]);
            printf("%i.\n", num[0]);
        }
        else if(num[1]>num[2] && num[2]>num[0])
        {
            printf("%i.\n", num[1]);
            printf("%i.\n", num[2]);
            printf("%i.\n", num[0]);
        }
        else if(num[0]>num[2] && num[2]>num[1])
        {
            printf("%i.\n", num[0]);
            printf("%i.\n", num[2]);
            printf("%i.\n", num[1]);
        }
        else
        {
            printf("%i.\n", num[2]);
            printf("%i.\n", num[0]);
            printf("%i.\n", num[1]);
        }
    return 0;
}
