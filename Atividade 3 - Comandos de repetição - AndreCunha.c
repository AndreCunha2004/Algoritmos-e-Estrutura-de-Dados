/* Desenvolva um programa que leia do usu�rio uma sequ�ncia de n�meros inteiros,
    at� que seja digitado o n�mero 0(zero).
    Ap�s ser digitado o n�mero zero o programa deve mostrar:

    1-quantos n�mero n�o nulos foram digitados;
    2-quantos n�meros pares foram digitados;
    3-a m�dia dos negativos;
    4-o maior n�mero digitado.

    Autor: Andr� Cunha
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

         // Verifica se n � par
        if(n%2==0 && n!=0)
            cont_par++;

        // Verifica se N � o maior numero
        if(n>higher)
            higher=n;

         // Verifica se N > 0
        if(n>0)
            cont_int++;

        // Verifica se N � negativo
        else if(n<0){
            cont_int++;
            cont_negtv++;
            sum_negatv+=n;
        }
        // Verifica se N � zero
        else
            printf("Fim do programa!\n");


    }while(n!=0);   // Encerra o loop

    // Imprime os resultados
    printf("Resultado:\n");
    printf("numeros nao-nulos: %d\n", cont_int);
    printf("numeros pares: %d\n", cont_par);
    printf("Media dos negativos: %.2f\n", sum_negatv/cont_negtv);
    printf("Maior numero: %d\n", higher);

    return 0;
}
