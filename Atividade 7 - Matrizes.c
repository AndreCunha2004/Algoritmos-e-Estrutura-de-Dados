/* Implemente um programa que preencha uma matriz 5x5 com números
aleatórios e:
(a) mostre a matriz;
(b) mostre o maior elemento da matriz;
(c) mostre o menor elemento da matriz;
(d) mostre a soma dos elementos pares;
(e) mostre a média dos elementos da matriz;
(f) mostre a soma dos elementos da diagonal principal.

    Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h> // Contém a função rand()
#include <time.h>   // Inicializa os números aleatórios
#define tam_linha 5
#define tam_coluna 5

int main()
{
    // Inicializa a semente para gerar números aleatórios
    srand(time(NULL));

    int matriz[tam_linha][tam_coluna];
    int i, j, maior, menor, sum_par = 0;
    int sum_diagonal = 0;
    float media = 0;


    // Preenche aleatoriamente a matriz com números inteiros entre 0 e 99
    for(i=0; i<tam_linha; i++){
        for(j=0; j<tam_coluna; j++){
            matriz[i][j] = rand() %100; // Gera numeros aleatórios
        }
    }

    // (a) mostre a matriz;
    printf("  Matriz %ix%i:\n", tam_linha, tam_coluna);

    for(i=0; i<tam_linha; i++){
        for(j=0; j<tam_coluna; j++){
            printf("%2i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Atribui as variáveis ao primeiro elemento
    maior = menor = matriz[0][0];

    for(i=0; i<tam_linha; i++){
        for(j=0; j<tam_coluna; j++){

            // (b) mostre o maior elemento da matriz;
            if(maior<matriz[i][j])
                maior=matriz[i][j];
            // (c) mostre o menor elemento da matriz;
            if(menor>matriz[i][j])
                menor=matriz[i][j];
            // (d) mostre a soma dos elementos pares;
            if(matriz[i][j]%2 == 0)
                sum_par+=matriz[i][j];

            // (e) mostre a média dos elementos da matriz;
            media+=matriz[i][j];

            // (f) mostre a soma dos elementos da diagonal principal.
            if(i == j)
                sum_diagonal+=matriz[i][j];
        }
    }

    // Imprime os resultados
    printf("****** Resultado ******\n");
    printf("MAIOR = %i\n", maior);
    printf("MENOR = %i\n", menor);
    printf("SOMA DOS PARES = %i\n", sum_par);
    printf("MEDIA DE TODOS ELEMENTOS = %.2f\n", media/(tam_linha*tam_coluna));
    printf("SOMA DA DIAGONAL PRINCIPAL = %i\n", sum_diagonal);

    printf("\nFIM DO PROGRAMA!\n");
    return 0;
}
