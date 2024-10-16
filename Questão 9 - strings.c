/* 9) Fa�a um programa em c que solicita uma string e conte o n�mero de caracteres especiais (n�o alfanum�ricos) em uma string.

    Autor: Andr� Cunha - Enpro 4
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    // Solicita a string do usu�rio
    printf("Digite uma string: ");
    gets(str);

    // Conta os caracteres especiais
    for (int i = 0; str[i] != '\0'; i++) { // Continua enquanto n�o chegar ao final da string
        char currentChar = str[i]; // Armazena o caractere atual

        // Verifica se o caractere � uma letra ou um d�gito
        if (!((currentChar >= 'A' && currentChar <= 'Z') || // Verifica se � letra mai�scula
              (currentChar >= 'a' && currentChar <= 'z') || // Verifica se � letra min�scula
              (currentChar >= '0' && currentChar <= '9'))) { // Verifica se � d�gito
            count++; // Incrementa o contador de caracteres especiais
        }
    }

    // Exibe o n�mero de caracteres especiais
    printf("N�mero de caracteres especiais: %d\n", count);

    return 0;
}
