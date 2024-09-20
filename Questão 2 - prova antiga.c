/*  Desenvolva um programa que leia do usu�rio uma sequ�ncia de n�meros inteiros at� que seja
digitado zero. Quando for digitado o n�mero 0 o programa deve:
i) o maior n�mero digitado;
ii) a soma de todos os n�meros digitados;
iii) a m�dia dos n�meros positivos ou a informa��o de que �n�o foram digitados n�meros positivos�

    Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior=0, count_positivos=0,sum_all=0;
    float sum_positv=0;

    // Interface do usu�rio
    printf("****** Insira uma sequencia de numeros diferente de 0 ******\n\n");

    // 1� leitura fora do ciclo para atribuir maior = num.
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    // Atribui os valores dos c�lculos existentes dentro do ciclo
    sum_all+=num;
    maior = num;

    do{
        // Leitura dos numeros inteiros != 0
        printf("Digite um numero inteiro: ");
        scanf("%i", &num);

        // Verifica o maior numero
        if(maior<num)
            maior=num;

        // Atribui a sum o valor de num sem restri��o
        sum_all+=num;

        // Verifica numeros positivos
        if(num>0){
            count_positivos++;  // Contador de n�s positivos
            sum_positv+=num;   // Sum apenas de n� positivos
        }

    // Encerra o ciclo
    }while(num!=0);

    // Imprime os resultados
    printf("\n");
    printf("****** Resultados ******\n"); // Interface do usu�rio
    printf("\n");
    printf("MAIOR = %i\n", maior);
    printf("SOMA = %i\n", sum_all);

    // Verifica se houveram n�s positivos
    if(count_positivos>0){
        sum_positv/=count_positivos;
        printf("MEDIA (apenas dos positivos) = %.2f\n", sum_positv);
    }else
        printf("N�o foram digitados n�meros positivos\n");

    // Interface do usu�rio
    printf("\n");
    printf("****** FIM ******\n");
    printf("\n");

    system("pause");
    return 0;
}
