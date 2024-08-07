// Este é um programa para resolver uma equação do segundo grau
#include <stdio.h>
#include <math.h>

// ax^2+bx+c=0
int main()  // Função principal
{
    float a,b,c;
    float delta=0;
    // Prompt user
    printf("CONFIRA O RESULTADO DA SUA EQUACAO DO 2 GRAU:\n\n");

    // Leitura das variáveis a,b e c
    printf("Digite os valores das variaveis da sua equacao(a, b e c):\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    // Cálculo de delta: delta= b^2-4*a*c
    delta = pow(b,2)-4*a*c;

    // Para os casos em que houverem raízes reais, calcule o(s) x: x=-b+-sqrt(delta)/2*a

    // Se delta < 0: não tem raizes reais.
    if(delta<0){
        printf("\nResposta:\n");
        printf("Esta funcao nao possui raizes reais. :( \n");
    }else
        // Se delta > 0: possui duas raizes reais
        if(delta>0){
        printf("\nResposta:\n");
        printf("Esta funcao possui duas raizes reais! :) \n");

        printf("X1 = %.2f\n", -b+sqrt(delta)/ 2*a);
        printf("X2 = %.2f\n", -b-sqrt(delta)/ 2*a);
        // Se delta = 0:  apenas uma raiz real.
        }else{
        printf("\nResposta:\n");
        printf("Esta funcao possui apenas uma raiz real! :) \n");

        printf("X1 = X2 = %.2f\n", -b+sqrt(delta)/ 2*a);
        }

    return 0;
}
