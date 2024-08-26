/* Elabore um programa que leia do usuário um número
    inteiro positivo n e exiba em tela a soma ∑1/n

     Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float sum=0;

    // Leitura de N
    printf("Digite N: ");
    scanf("%i", &n);
    printf("\n");

    // Loop de 0 até n
    for(int i=1; i<=n;i++){
        sum+= 1.0/i;
    }
    // Imprime o somatório
    printf("Resultado = %.8f\n", sum);


    return 0;
}
