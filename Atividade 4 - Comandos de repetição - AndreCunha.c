/* Faça um programa que solicita dois números inteiros Num1 e Num2 (suponha que será digitado Num1 <= Num2) e:
    1- Mostra os números inteiros de Num1 a Num2;
    2- Mostra os múltiplos de 7 de Num1 a Num2;
    3- Mostra a soma dos números de Num1 a Num2;
    4- Mostra a média dos números negativos Num1 a Num2
            (se Num1 não for negativo o programa dever exibir a mensagem:
                    “Não exitem números negativos entre «N1» e «N2»”).

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum=0;
    float sum_negtv=0;

    // Leitura de num1 e num2
    printf("Digite Numero-1: ");
    scanf("%d", &num1);

    printf("Digite Numero-2: ");
    scanf("%d", &num2);

    printf("\n");

    // Interface
    printf("De %i ate %i temos os numeros:\n", num1, num2);

    // Primeiro Loop de num1 até num2
    for(int i=num1+1; i<num2; i++){

        // Imprime os numeros de n1 até n2
        printf("%d\n",i);

        // Acumula a soma de 'i'
        sum+=i;
    }
    printf("\n");

    // Interface
    printf("Destes numeros, os multiplos de 7 sao:\n");

    int found=0; // Declara como zero para a variavel que localizará se houve multiplos de 7

    // Segundo Loop de num1 até num2
    for(int i=num1+1; i<num2; i++){

        // Verifica os múltiplos de 7 na amostra
        if(i%7==0){
            printf("%d\n",i);
            found+=1;
        }else
            found+=0;
    }

    printf("\n");

    // Verifica se não foram encontrados mutiplos de 7
    if(found<=0)
        printf("Nenhum dos numeros sao multiplos de 7.\n");

    printf("\n");

    // Imprime a soma dos numeros entre n1 e n2, calculada no primeiro loop
    printf("Soma dos numeros: %d.\n", sum);
    printf("\n");

    // Atribui zero novamente para a variavel que localizará n1 negativo
    found=0;

    // Terceiro Loop de num1 até num2
    for(int i=num1+1; i<num2; i++){

        // Verifica numeros negativos
        if(i<0){
            found+=1;
            sum_negtv+=i;
        }else
            found+=0;   // mantem o valor de found em zero para demonstrar que não há numeros negatv
    }

    // Verifica se houve numeros negativos
    if(found>0)
        printf("Media dos numeros negativos = %.2f.\n",sum_negtv/found);
    else
        printf("Nao houveram numeros negativos.\n");

    return 0;
}
