/* Faça um programa que leia do usuário um número inteiro positivo n e exiba corretamente na
tela uma das mensagens:
i) você digitou o número 1, que não é primo nem composto.
ii) você digitou o número <n>, que é primo.
iii) você digitou o número <n>, que é composto. Fatoração em primos: 𝑛 = 𝑝1 × …× 𝑝𝑘 .

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count=0;

    // Leitura de `num`
    printf("Digite um numero natural: ");
    scanf("%i", &num);
    printf("\n");

    // Verifica a quantidade de multiplos de `num`
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            count++;
    }

    // Caso exista apenas 1 multiplo
    if(count == 1)
        printf("Voce digitou o numero %i, que nao eh primo nem composto.\n", num);
    else

        // Caso exista apenas 2 multiplo
        if(count == 2)
            printf("Voce digitou o numero %i, que eh primo.\n", num);

        // Caso existam mais de 2 multiplos
        else{
            printf("Voce digitou o numero %i, que eh composto.\n",num);
            printf("\nFatoracao em primos: ");

            // Fatoração em primos de `num`
            int aux = num;
            int primeiro =1; // Variável para controlar o uso de "x"

            for(int i=2; i<=aux;){
                if(aux%i == 0){

                    // Se primeiro existe
                    if(primeiro){
                        printf("%i", i); // não imprime o fator "x"
                        primeiro = 0;

                    // Se primeiro não existe
                    }else{
                        printf(" x %i", i);
                    }
                    aux/=i;
                }else
                    i++;
            }
            printf("\n\n");
        }

    system("pause");
    return 0;
}
