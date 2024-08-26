/* Elabore um programa que leia do usu�rio um n�mero
    inteiro positivo N e exiba em tela a soma de 1/n at� n/1.

     Autor: Andr� Cunha
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

    // Loop de 1 at� N
    for(int i=0;i<n;i++){
        sum+= (i+1.0)/(n-i);
    }

    // Imprime o resultado
    printf("Resultado = %.8f\n", sum);
    return 0;
}

