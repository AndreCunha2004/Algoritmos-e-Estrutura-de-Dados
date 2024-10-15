/* 5) Faça um programa que solicita uma string e mostre a string invertida.

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char string1[50];

    // Leitura da string
    printf("Digite a string-1: ");
    gets(string1);
    printf("\n");

    // Reverte a string 1
    strrev(string1);

    // Imprime o resultado
    printf("String revertida: %s\n\n", string1);

    printf("FIM DO PROGRAMA!\n");
    return 0;
}
