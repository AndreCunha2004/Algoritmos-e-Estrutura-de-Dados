/* 7) Faça um programa que solicita uma string e mostre quantas vezes a letra 'a'(ou 'A') consta na string.

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char string1[50];
    int cont_a=0;

    // Leitura da string
    printf("Digite a string-1: ");
    gets(string1);
    printf("\n");

    // Verifica a ocorrência do caractere "A"
    for(int i=0; string1[i]!='\0'; i++){

        // Altera o caractere "A" por "4"
        if(string1[i] == 'A' ||string1[i] == 'a')
            cont_a++;
    }

    // Imprime o resultado
    printf("O caractere 'a' ou 'A' aparece %i vezes na string acima.\n\n", cont_a);

    printf("FIM DO PROGRAMA!\n");
    return 0;
}
