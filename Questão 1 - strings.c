/* 1) Crie um programa que solicita duas strings e depois mostra as duas concatenadas.

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[50];
    char string2[50];

    // Leitura da string 1
    printf("Digite a string-1: ");
    gets(string1);
    printf("\n");

    // Leitura da string 2
    printf("Digite a string-2: ");
    gets(string2);
    printf("\n");

    // Concatenação da string 2 em string 1
    strcat(string1,string2);

    // Imprime o resultado
    printf("String concatenada: %s\n\n", string1);

    printf("FIM DO PROGRAMA!\n");
    return 0;
}
