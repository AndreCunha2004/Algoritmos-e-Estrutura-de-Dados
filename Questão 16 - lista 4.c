/*Faça um algoritmo que leia um número positivo e exiba em tela seus
    divisores. Exemplo: os divisores do número 66 são:
     1, 2, 3, 6, 11, 22, 33 e 66.

     Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    // Leitura de N
    printf("Digite N: ");
    scanf("%i", &n);

    // Loop que verifica os divisores de N
    for(int i=1;i<=n;i++){
        if(n%i==0)
            printf("%i ", i);
    }
    // Encerra o programa
   printf("\n\n");
   printf("FIM DO PROGRAMA!\n");
    return 0;
}
