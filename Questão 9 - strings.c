/* 9) Faça um programa em c que solicita uma string e conte o número de caracteres especiais (não alfanuméricos) em uma string.

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    // Solicita a string do usuário
    printf("Digite uma string: ");
    gets(str);

    // Conta os caracteres especiais
    for (int i = 0; str[i] != '\0'; i++) { // Continua enquanto não chegar ao final da string
        char currentChar = str[i]; // Armazena o caractere atual

        // Verifica se o caractere é uma letra ou um dígito
        if (!((currentChar >= 'A' && currentChar <= 'Z') || // Verifica se é letra maiúscula
              (currentChar >= 'a' && currentChar <= 'z') || // Verifica se é letra minúscula
              (currentChar >= '0' && currentChar <= '9'))) { // Verifica se é dígito
            count++; // Incrementa o contador de caracteres especiais
        }
    }

    // Exibe o número de caracteres especiais
    printf("Número de caracteres especiais: %d\n", count);

    return 0;
}
