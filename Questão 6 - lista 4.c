/* Este programa recebe dois numeros, em seguida, calcula e
    imprime a soma dos inteiros do primeiro ao segundo numero.

        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int soma=0;

    // Leitura das variáveis 'A' e 'B'
    printf("Digite o 1-numero: ");
    scanf("%i", &a);

    printf("Digite o 2-numero: ");
    scanf("%i", &b);

    // Verifica se 'A' é maior que 'B'
    if(a>b){
        // Loop p/ soma dos inteiros entre 'A' e 'B'
        for(int i=b+1; i<a; i++){
            soma+=i;
        }
        // Imprime o resultado
        printf("SOMA de %i ate %i = %i!\n\n", b, a, soma);
    }
    // verifica se 'B' é maior que 'A'
    else if(b>a){
        // Loop p/ soma dos inteiros entre 'B' e 'A'
        for(int i=a+1; i<b; i++){
            soma+=i;
        }
        // Imprime o resultado
        printf("SOMA de %i ate %i = %i!\n\n", a, b, soma);
    }
    // verifica se os numeros sao iguais
    else{
        // Imprime o resultado
        printf("Os numeros digitados sao iguais!\n\n");
    }
    return 0;
}
