/* Faça um programa que realize a fatoração em primos dos numeros de a até b, sendo A < B.

    Autor: André Cunha - Enpro 4

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_a, num_b, i;

    // interface
    printf("-------------------------------\n");
    printf("Digite dois numeros inteiros A e B, com A<B.\n");


    // Leitura dos numeros
    printf("Digite A: ");
    scanf("%i", &num_a);

    printf("Digite B: ");
    scanf("%i", &num_b);

    // interface
    printf("-------------------------------\n");

    printf("Fatoracao em primos dos numeros de %i a %i:\n", num_a, num_b);


    // imprime o valor a ser fatorado
    for(i=num_a; i<=num_b; i++){

        printf("%i = ", i);

        int aux=i;

        // fatoracao em primos do valor
        for(int j=2; j<=aux;){

            if(aux%j == 0){
                printf("%i x ", j);
                aux/=j; // Atualiza o valor
            }else
                j++; // Atualiza o contador
        }
        printf("\n");
    }

    // interface
    printf("-------------------------------\n");
    printf("FIM DO PROGRAMA!\n");
    return 0;
}
