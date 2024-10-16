/* 8) Fa�a um programa que solicita uma string e mostre a string digitada sem os espa�os.

    Autor: Andr� Cunha - Enpro 4
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100], semEspacos[100];
    int i, j = 0;

    // Solicita que o usu�rio digite uma string
    printf("Digite uma string: ");
    gets(string);

    // Remove os espa�os
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != ' ')  // Verifica se o caractere n�o � um espa�o
        {
            semEspacos[j] = string[i];  // Armazena o caractere sem espa�o
            j++;
        }
    }
    semEspacos[j] = '\0';  // Adiciona o caractere nulo ao final da string sem espa�os

    // Exibe a string sem espa�os
    printf("\nString sem espacos: %s\n", semEspacos);

    return 0;
}

