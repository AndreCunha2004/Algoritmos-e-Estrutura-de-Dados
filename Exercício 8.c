// Este programa recebe um valor (idade) e imprime o conceito da faixa etária
#include <stdio.h>

int main()
{
    int idade;

    // Leitura da variável
    do{
    printf("Digite a sua idade: ");
    scanf("%i", &idade);
    printf("\n");
    }while(idade < 0); // recusa valores abaixo de zero

    // Verifica em qual faixa etária o indivíduo se encontra
    if(idade < 18)
        printf("Voce eh menor de idade.\n");
    else
        if(idade >= 18 && idade < 65)
            printf("Voce eh adulto.\n");
        else    // Só restam valores acima de 64
            printf("Voce eh idoso.\n");

    return 0;
}
