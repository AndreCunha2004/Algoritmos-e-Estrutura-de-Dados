// Este programa recebe 2 variaveis float, um símbolo matemático e resolve a conta.
#include <stdio.h>

int main()
{
    float x,y;
    char simbolo;

    // Leitura das variáveis
    printf("Digite X: ");
    scanf("%f", &x);

    printf("Digite Y: ");
    scanf("%f", &y);

    printf("Digite o simbolo: ");
    setbuf(stdin,NULL);
    scanf("%c", &simbolo);

    // Verifica o símbolo e realiza a operação
    if(simbolo == '+'){
        printf("Resultado:\n");
        printf("%.2f + %.2f = %.2f\n", x, y, x+y);
    }else
        if(simbolo == '-'){
            printf("Resultado:\n");
            printf("%.2f - %.2f = %.2f\n", x, y, x-y);
        }else
            if(simbolo == '*'){
                printf("Resultado:\n");
                printf("%.2f * %.2f = %.2f\n", x, y, x*y);
            }else
                if(simbolo == '/'){
                    printf("Resultado:\n");
                    printf("%.2f / %.2f = %.2f\n", x, y, x/y);
                }
    return 0;
}
