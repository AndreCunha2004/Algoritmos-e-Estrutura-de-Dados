// Este programa identifica um ano bissexto
#include <stdio.h>

int main()
{
    int ano_inserido;

    // Leitura da variavel
    printf("Insira um ano especifico: ");
    scanf("%i", &ano_inserido);
    printf("\n");

    // Verificação da variavel
    if(ano_inserido%400 == 0 || ano_inserido%4 == 0 && ano_inserido%100 !=0 )
        printf("O ano inserido eh bissexto.\n");
    else
        printf("O ano nao eh bissexto.\n");

    return 0;
}
