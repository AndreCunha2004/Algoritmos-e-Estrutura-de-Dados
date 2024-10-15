/* 2) Crie um programa que solicita duas strings e depois e retorne se são iguais.

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char string1[50];
    char string2[50];
    int comparacao=0;

    // Leitura da string 1
    printf("Digite a string-1: ");
    gets(string1);
    printf("\n");

    // Leitura da string 2
    printf("Digite a string-2: ");
    gets(string2);
    printf("\n");

    // Compara as strings 1 e 2
    comparacao = strcmp(string1,string2);

    // Imprime o resultado
    if(comparacao == 0)
        printf("As string sao iguais.\n\n");
    else
        printf("As string sao diferentes.\n\n");

    printf("FIM DO PROGRAMA!\n");
    return 0;
}
