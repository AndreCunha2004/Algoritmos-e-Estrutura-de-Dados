/* Este programa recebe N, num1, num2, em seguida,
   calcula e exibe os múltiplos de N entre n1 e n2.

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1, num2;

    // Interface
    printf("Programa que mostra os multiplos de N entre dois Num1 e Num2.\n\n");

    // Leitura de N
    printf("Digite N: ");
    scanf("%d", &n);
    printf("\n");

    // Leitura de num1
    printf("Digite num-1: ");
    scanf("%d", &num1);
    printf("\n");

    // Leitura de num2
    printf("Digite num-2: ");
    scanf("%d", &num2);
    printf("\n");

    // Verifica se o primeiro numero digitado é menor
    if(num1<num2){
        for(int i=num1+1;i<num2;i++){
            // verifica quais numeros de num1 até num2 sao mulitplos de n
            if(i%n==0){
                printf("- %i ", i);
            }
        }
        printf("\n");
        printf("FIM.\n");
    }
    // verifica se num2 é menor que num1
    else if(num2<num1){
        for(int i=num2+1; i<num1;i++){
            //verifica quai sao os múliplos
            if(i%n==0){
                printf("- %i ", i);
            }
        }
        printf("\n");
        printf("FIM.\n");
    }
    // Verifica se num1 e num2 sao iguais
    else{
        printf("%d = %d\n", num1, num2);
        printf("Nao ha multiplos de %i entre %i - %i.\n\n", n, num1, num2);
        printf("FIM.\n");
    }

    return 0;
}
