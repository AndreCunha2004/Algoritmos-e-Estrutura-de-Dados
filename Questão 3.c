// Este eh um programa que recebe um valor inteiro (hora) e imprime a convers�o para segundos
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo_hora;

    // Leitura da vari�vel
    printf("Digite o tempo transcorrido pelo cronometro: ");
    scanf("%f", &tempo_hora);
    printf("\n");

    //Converte o valor e imprime
    printf("Tempo convertido: %.2f segundos.\n", tempo_hora*3600);

    return 0;
}
