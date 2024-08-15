// Este programa recebe um valor de tempo em segundos e exibe o valor convertido p/ tempo restante em horas, minutos e segundos.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo;

    // Leitura da variavel tempo
    printf("Digite o tempo transcorrido pelo cronometro em segundos:\n");
    scanf("%i", &tempo);
    printf("\n");

    // Converte para horas, minutos e segundos
    int horas = tempo/3600;
    int minutos = (tempo % 3600)/60;
    int segundos = tempo%60;

    // Exibe o resultado
    printf("O tempo restante eh: %i horas, %i minutos e %i segundos.\n", horas, minutos, segundos);

    return 0;
}
