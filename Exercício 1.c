// Imprimir se um numero inteiro é maior, menor ou igual a zero
#include <stdio.h>

int main(){     // Funcao principal
    int a;

    // Prompt user
    printf("Verificacao de numeros inteiros!\n\n");

    // Leitura da variavel
    printf("Digite aqui um numero: ");
    scanf("%i",&a);

    if(a>0){            // Se A > 0
        printf("O numero digitado eh > 0! \n\n");
    }else
        if(a<0){        // Se A < 0
            printf("O numero digitado eh < 0! \n\n");
        }else           // Se A = 0
            printf("O numero digitado eh = 0! \n\n");

    return 0;       // Retorna possíveis erros no programa.
}

