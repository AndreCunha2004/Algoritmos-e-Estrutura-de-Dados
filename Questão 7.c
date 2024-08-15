// Este programa recebe dois valores de notas, calcula a media e imprime o resultado (aprovado ou reprovado)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[3];
    float media=0;

    // Loop p/ leitura do vetor notas
    for(int i=0; i<3;i++){
        printf("Nota %i do aluno: ", i+1);
        scanf("%f", &notas[i]);
        printf("\n");

        // Acumula as notas
        media+=notas[i];
    }
    // Divide pela quantidade de notas
    media/=3;

    //Verifica o resultado do aluno
    if(media == 10)
        printf("Aluno aprovado com distincao!\n");
    else if(media >= 6 && media < 10)
        printf("Aluno aprovado!\n");
    else
        printf("Aluno reprovado!\n");

    return 0;
}
