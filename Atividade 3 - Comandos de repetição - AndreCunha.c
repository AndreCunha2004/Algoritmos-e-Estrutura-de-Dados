/* Desenvolva um programa que leia do usuário uma sequência de números inteiros,
    até que seja digitado o número 0(zero).
    Após ser digitado o número zero o programa deve mostrar:

    1-quantos número não nulos foram digitados;
    2-quantos números pares foram digitados;
    3-a média dos negativos;
    4-o maior número digitado.

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont_int=0, cont_par=0;
    int higher=0, cont_negtv=0;
    float sum_negatv=0;

    // Loop infinito limitado em diferente de zero
    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
        printf("\n");

        if(n!=0)
            cont_int++;

            // Verifica se n é par
            if(n%2==0 && n!=0)
                cont_par++;

            // Verifica se N é o maior numero
            if(n>higher)
                higher=n;
        
            // Verifica se N é negativo
            if(n<0){
                cont_negtv++;
                sum_negatv+=n;
            }
        }
    }while(n!=0);   // Encerra o loop

    // Imprime os resultados
    printf("Resultado:\n");
    printf("numeros nao-nulos: %d\n", cont_int);
    printf("numeros pares: %d\n", cont_par);
    printf("Media dos negativos: %.2f\n", sum_negatv/cont_negtv);
    printf("Maior numero: %d\n", higher);

    return 0;
}
