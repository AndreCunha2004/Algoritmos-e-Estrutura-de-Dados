/*  Desenvolva um programa que leia do usuário uma sequência de números inteiros até que seja
digitado zero. Quando for digitado o número 0 o programa deve:
i) o maior número digitado;
ii) a soma de todos os números digitados;
iii) a média dos números positivos ou a informação de que “não foram digitados números positivos”

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior=0, count_positivos=0,sum_all=0;
    float sum_positv=0;

    // Interface do usuário
    printf("****** Insira uma sequencia de numeros diferente de 0 ******\n\n");

    // 1º leitura fora do ciclo para atribuir maior = num.
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    // Atribui os valores dos cálculos existentes dentro do ciclo
    sum_all+=num;
    maior = num;

    do{
        // Leitura dos numeros inteiros != 0
        printf("Digite um numero inteiro: ");
        scanf("%i", &num);

        // Verifica o maior numero
        if(maior<num)
            maior=num;

        // Atribui a sum o valor de num sem restrição
        sum_all+=num;

        // Verifica numeros positivos
        if(num>0){
            count_positivos++;  // Contador de nºs positivos
            sum_positv+=num;   // Sum apenas de nº positivos
        }

    // Encerra o ciclo
    }while(num!=0);

    // Imprime os resultados
    printf("\n");
    printf("****** Resultados ******\n"); // Interface do usuário
    printf("\n");
    printf("MAIOR = %i\n", maior);
    printf("SOMA = %i\n", sum_all);

    // Verifica se houveram nºs positivos
    if(count_positivos>0){
        sum_positv/=count_positivos;
        printf("MEDIA (apenas dos positivos) = %.2f\n", sum_positv);
    }else
        printf("Não foram digitados números positivos\n");

    // Interface do usuário
    printf("\n");
    printf("****** FIM ******\n");
    printf("\n");

    system("pause");
    return 0;
}
