// Este programa identifica se o numero inteiro digitado é impar ou par
#include <stdio.h>

int main()  // Funcao principal
{
    //Declara as variaveis necessárias
    int a;

    // Prompt User
    printf("Verifique um numero impar ou par!\n\n");

    // Leitura do numero
    printf("Digite um numero: ");
    scanf("%i", &a);
    printf("\n");

    // Se Par: imprime
    if(a%2 == 0)
        printf("O numero %i eh par!\n", a);

    // Se Impar: imprime
    else
        printf("O numero %i eh impar!\n", a);

    return 0;
}
