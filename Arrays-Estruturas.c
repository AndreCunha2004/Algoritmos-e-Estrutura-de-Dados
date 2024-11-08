/* Crie uma estrutura representando um aluno de uma disciplina.
Essa estrutura deve conter o n�mero da matr�cula do aluno, seu nome e as notas de tr�s provas.
 Ap�s, escreva um programa que leia os dados de cinco alunos e os armazene em um array de estruturas.
  Em seguida, exiba o nome e as notas do aluno que possui a maior m�dia geral dentre cinco alunos.

    Autor: Andr� Cunha - Enpro 4
*/
#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float notas[3];
};

int main() {
    struct Aluno aluno[5];
    int i, j;
    float media, maiorMedia = 0.0;
    int indiceMaiorMedia = 0;

    // Leitura dos dados dos cinco alunos
    for (i = 0; i < 5; i++) {
        printf("Digite o numero da matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].matricula);
        setbuf(stdin,NULL); // Limpa o buffer de nova linha

        printf("Digite o nome do aluno %d: ", i + 1);
        gets(aluno[i].nome);

        printf("Digite as tres notas do aluno %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);
        }
        printf("\n");
    }

    // Calcula a m�dia de cada aluno e identifica o aluno com a maior m�dia
    for (i = 0; i < 5; i++) {
        media = 0.0;
        for (j = 0; j < 3; j++) {
            media += aluno[i].notas[j];
        }
        media /= 3.0;

        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
    }

    // Exibe o nome e as notas do aluno com a maior m�dia
    printf("Aluno com a maior m�dia geral:\n");
    printf("Nome: %s\n", aluno[indiceMaiorMedia].nome);
    printf("Matr�cula: %d\n", aluno[indiceMaiorMedia].matricula);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno[indiceMaiorMedia].notas[0], aluno[indiceMaiorMedia].notas[1], aluno[indiceMaiorMedia].notas[2]);
    printf("M�dia: %.2f\n", maiorMedia);

    return 0;
}
