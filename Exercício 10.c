// Este programa recebe um valor 1-7 e imprime o dia da semana
#include <stdio.h>

int main()
{
    int num;

    // Leitura da variavel
    do{
    printf("Digite um numero entre 1-7: ");
    scanf("%i", &num);
    printf("\n");
    }while(num <= 0);   // abordagem p/ exclusão de valores indesejados
    // Controle condicional de qual o numero inserido
    switch(num){
        case 1: printf("Domingo.\n");break;
        case 2: printf("Segunda.\n");break;
        case 3: printf("Terca.\n");break;
        case 4: printf("Quarta.\n");break;
        case 5: printf("Quinta.\n"); break;
        case 6: printf("Sexta.\n");break;
        case 7: printf("Sabado.\n");break;
        default: printf("Numero invalido!.\n"); // exclusão de valores de outra forma
    }
    return 0;
}
