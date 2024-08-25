/* Este programa lê do usuário um número inteiro não-negativo n,
    calcule n! e exiba o resultado em tela.

        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Loop de repetição condicional
    do{
        int fat=1; // Declarando localmente (reseta o valor a cada loop)

        printf("Digite N: ");
        scanf("%d", &n);

        if(n<0) // Verifica se o numero é negativo
            printf("Numero invalido! Tente novamente...\n\n");

        else if(n>=0){  // Verifica se o numero é maior = 0
            for(int i=1;i<=n;i++){
                fat*=i;
            }
            printf("%d! = %d \n",n,fat);
        }
    }while(n>=0);    // condicional para numeros nao nulos

    return 0;
}
