/* 6) Faça um programa que solicita uma string e substitua todas as ocorrências do caractere 'A' em uma string pelo caracter '4'.

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

    // Verifica a ocorrência do caractere "A"
    for(int i=0; string1[i]!='\0'; i++){

        // Altera o caractere "A" por "4"
        if(string1[i] == 'A' ||string1[i] == 'a')
            string1[i] = '4';
    }

    // Imprime o resultado
    printf("String modificada: %s\n\n", string1);

    printf("FIM DO PROGRAMA!\n");
    return 0;
}
