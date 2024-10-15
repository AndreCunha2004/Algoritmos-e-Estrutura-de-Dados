/* 3) Escreva um programa que:
a) Solicite que o usuário digite uma senha:
b) Se o usuário digitar "Senha123" o programa deve mostra "Senha correta", caso contrário o programa deve mostrar "Senha INCORRETA".

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char string1[50] = "Senha123";
    char string2[50];
    int comparacao=0;

    // Leitura da string 2
    printf("Digite a string-2: ");
    gets(string2);
    printf("\n");

    // Compara as strings 1 e 2
    comparacao = strcmp(string1,string2);

    // Imprime o resultado
    if(comparacao == 0)
        printf("Senha correta\n\n");
    else
        printf("Senha INCORRETA\n\n");

    printf("FIM DO PROGRAMA!\n");
    return 0;
}
