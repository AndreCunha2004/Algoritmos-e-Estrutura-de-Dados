/*

Complete o programa que deve mostrar corretamente:

/////////////////////////////////////////////////////////////////////////////////////////////
Média da turma: <>
Matrícula do Aluno com a maior nota: <> (Se preferir você pode supor que existe apenas um aluno com a maior nota)
Soma das faltas de todos os alunos com nota menor ou igual à média da turma: <>
/////////////////////////////////////////////////////////////////////////////////////////////

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>

int matricula[10] = {2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410};//Matrículas dos 10 alunos
float Nota_Semestre[10] = {7.0, 0.4, 4.9, 8.8, 4.2, 5.5, 7.1, 1.1, 2.5, 6.7};//Nota final de cada aluno na sequência correspondente da matrícula
int faltas[10] = {1,  60,   2,   8,   4,   4,  10,  18,   2,  14};//Número de faltas de cada aluno na sequência correspondente da matrícula


int main()
{
    float mean=0;
    int i, higher=0, sum_faltas=0;

    // Atribui o título de maior nota para o primeiro aluno

    for(i=0; i<10; i++){

        // acumula a soma das notas
        mean+=Nota_Semestre[i];

        // Verifica o aluno de maior media a partir do aluno 0
        if(Nota_Semestre[higher] < Nota_Semestre[i])
            higher = i;
    }

    // Calcula a media a partir da soma
    mean/=10;

    for(i=0; i<10; i++){
        // Acumula a soma das faltas
        if(Nota_Semestre[i] <= mean)
            sum_faltas+=faltas[i];
    }

    // imprime o resultado
    printf("****** Resultado ******\n");
    printf("Media da turma: %.2f\n", mean);
    printf("Matricula do aluno com maior nota: %i (Nota-semestre: %.2f)\n", matricula[higher], Nota_Semestre[higher]);
    printf("Soma das faltas de todos os alunos com nota menor ou igual a media da turma: %i\n", sum_faltas);
    printf("FIM DO PROGRAMA!\n\n");

    return 0;
}

