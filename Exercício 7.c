// Este programa recebe 2 variaveis float, um s�mbolo matem�tico e resolve a conta.
#include <stdio.h>

int main()
{
    float x,y;
    char simbolo;

    // Leitura das vari�veis
    printf("Digite X: ");
    scanf("%f", &x);

    printf("Digite Y: ");
    scanf("%f", &y);

    printf("Digite o simbolo: ");
    setbuf(stdin,NULL);
    scanf("%c", &simbolo);

    // Verifica o s�mbolo e realiza a opera��o
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
