/* 8) Faça um programa que solicita uma string e mostre a string digitada sem os espaços.

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100], semEspacos[100];
    int i, j = 0;

    // Solicita que o usuário digite uma string
    printf("Digite uma string: ");
    gets(string);

    // Remove os espaços
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')  // Verifica se o caractere não é um espaço
        {
            semEspacos[j] = string[i];  // Armazena o caractere sem espaço
            j++;
        }
    }
    semEspacos[j] = '\0';  // Adiciona o caractere nulo ao final da string sem espaços

    // Exibe a string sem espaços
    printf("\nString sem espacos: %s\n", semEspacos);

    return 0;
}

