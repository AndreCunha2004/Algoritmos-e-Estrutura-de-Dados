/* Elabore um programa que leia do usu�rio um n�mero inteiro
    positivo n e exiba em tela se n � primo.

     Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont_divisores=0;

    // Leitura de N
    printf("Digite N: ");
    scanf("%i", &n);

    // Loop p/ percorrer os numeros de 1 at� N
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cont_divisores++;
    }

    printf("\n");

    // Verifica se � primo pela quantidade de divisores
    if(cont_divisores>2)
        printf("%i nao eh primo!\n", n);
    else
        printf("%i eh primo!\n", n);

    return 0;
}
