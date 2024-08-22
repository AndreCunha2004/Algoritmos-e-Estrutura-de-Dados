/* Este programa recebe a quantidade de alunos de uma turma,
    e solicita a nota de cada um deles. Ao final, imprime a média

        Autor: André Cunha
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aluno;
    float notas, media=0;

    // Leitura da variavel 'aluno'
    printf("Digite a quantidade de alunos (as): ");
    scanf("%i", &aluno);

    // Loop p/ leitura de cada nota
    for(int i=0; i<aluno; i++){
        printf("Nota do aluno %i: ", i+1);
        scanf("%f", &notas);
        printf("\n");

        // Acumula as notas de todos os alunos
        media+=notas;
    }

    //Atribui a 'notas' a media dos alunos
    media = media/aluno;

    printf("MEDIA DA TURMA: %.2f! \n\n", media);

    return 0;
}
