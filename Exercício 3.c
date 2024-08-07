// Este programa recebe 2 numeros e determina o maior entre eles.
#include <stdio.h>

int main()
{
    // Declara as variáveis
    float a,b;
    // Prompt user
    printf("Verifique qual eh o maior numero!\n\n");

    // Leitura do primeiro numero
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("\n");

    // Declara o primeiro numero como maior
    float maior = a;

    // Leitura do segundo numero
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("\n");

    // Se primeiro maior que segundo
    if(maior<b)
        printf("O maior numero eh B: %.2f\n", b);
    // Se segundo maior que primeiro
    else
        if(a==b)
            printf("Os numero sao iguais: %.2f\n", a);
        else
            printf("O maior numero eh A: %.2f\n",a);

    //Retorna 0
    return 0;
}
