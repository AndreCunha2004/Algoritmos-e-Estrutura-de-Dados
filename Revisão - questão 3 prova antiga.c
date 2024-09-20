/* Faça um programa que mostre na tela “Digite as medidas de três lados de um triângulo: ” e
em sequência leia três números reais.
    - Após a leitura o programa deve exibir corretamente uma das
    mensagens:
i) Os números digitados não representam as medidas dos lados de nenhum triângulo.
ii) Os números digitados representam as medidas dos lados de um triângulo retângulo.
iii) Os números digitados representam as medidas dos lados de um triângulo que não é retângulo.

    Autor: André Cunha
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

    // Interface do usuário
    printf("\n****** Resultado ******\n");

    // Verifica a condição de existência de um triângulo
    if(lado_1+lado_2 < lado_3 || lado_1+lado_3 < lado_2 || lado_3+lado_2 < lado_1)
        printf("\nOs numeros digitados nao representam as medidas dos lados de nenhum triangulo.\n");
    else
        // Verifica se é triângulo retângulo
        if(pow(lado_1,2)==pow(lado_2,2)+pow(lado_3,2) || pow(lado_2,2)==pow(lado_1,2)+pow(lado_3,2) || pow(lado_3,2)==pow(lado_1,2)+pow(lado_2,2))
            printf("\nOs numeros digitados representam as medidas dos lados de um triangulo retangulo.\n");
        else
            printf("\nOs numeros digitados representam as medidas dos lados de um triangulo que nao eh retangulo.\n");

    // Interface do usuário
    printf("\n****** FIM ******\n");

    system("pause");
    return 0;
}
