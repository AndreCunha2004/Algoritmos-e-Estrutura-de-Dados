/* Fa�a um programa que mostre na tela �Digite as medidas de tr�s lados de um tri�ngulo: � e
em sequ�ncia leia tr�s n�meros reais.
    - Ap�s a leitura o programa deve exibir corretamente uma das
    mensagens:
i) Os n�meros digitados n�o representam as medidas dos lados de nenhum tri�ngulo.
ii) Os n�meros digitados representam as medidas dos lados de um tri�ngulo ret�ngulo.
iii) Os n�meros digitados representam as medidas dos lados de um tri�ngulo que n�o � ret�ngulo.

    Autor: Andr� Cunha
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int lado_1, lado_2, lado_3;

    printf("Digite a medida do lado-1 de um triangulo: ");
    scanf("%i", &lado_1);

    printf("Digite a medida do lado-2 de um triangulo: ");
    scanf("%i", &lado_2);

    printf("Digite a medida do lado-3 de um triangulo: ");
    scanf("%i", &lado_3);

    // Interface do usu�rio
    printf("\n****** Resultado ******\n");

    // Verifica a condi��o de exist�ncia de um tri�ngulo
    if(lado_1+lado_2 < lado_3 || lado_1+lado_3 < lado_2 || lado_3+lado_2 < lado_1)
        printf("\nOs numeros digitados nao representam as medidas dos lados de nenhum triangulo.\n");
    else
        // Verifica se � tri�ngulo ret�ngulo
        if(pow(lado_1,2)==pow(lado_2,2)+pow(lado_3,2) || pow(lado_2,2)==pow(lado_1,2)+pow(lado_3,2) || pow(lado_3,2)==pow(lado_1,2)+pow(lado_2,2))
            printf("\nOs numeros digitados representam as medidas dos lados de um triangulo retangulo.\n");
        else
            printf("\nOs numeros digitados representam as medidas dos lados de um triangulo que nao eh retangulo.\n");

    // Interface do usu�rio
    printf("\n****** FIM ******\n");

    system("pause");
    return 0;
}
