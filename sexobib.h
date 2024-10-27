#include <stdio.h>

void sexo(){
    char genero;

    do{
        printf("Digite o seu sexo (M: masculino e F: feminino): ");
        scanf(" %c", &genero);

        if(genero != 'M' && genero != 'F')
            printf("Caractere invalido! Tente novamente...\n");

    }while(genero != 'M' && genero != 'F');

    printf("\nGenero cadastrado! (%c)\n", genero);
}

