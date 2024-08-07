// Este é um programa que recebe uma string e verifica se a mesma coincide com outra string pre-definida
#include <stdio.h>
#include <string.h>

int main()
{
    char senha[10]; // String alfanumérica

    //Leitura da string
    do{
    printf("Digite a senha: ");
    gets(senha);
    printf("\n");
    }while(strcmp("1234",senha) != 0);

    // Imprime uma confirmação
    printf("Senha confirmada!\n");

    return 0;
}
