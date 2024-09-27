/*

Complete o programa que deve:
a) Mostrar a mensagem "Digite a matrícula do aluno: " e depois ler um número inteiro;
b) Se o número não-nulo digitado não for correspondente a nenhuma matrícula o programa deve mostrar a mansagem "Matrícula inexistente!"
c) Se a matrícula for encontrada o programa deve mostrar:

/////////////////////////////////////////////////////////////////////////////////////////////
Matrícula: <>
Média: <>
Faltas: <>
Resultado: <> ("Aprovado" ou "Repr por Nota" ou "Repr por Falta" ou "Repr por Nota e Falta")
/////////////////////////////////////////////////////////////////////////////////////////////

Considere que o aluno será "Reprovado por Falta" sempre que o número de faltas for superior a 15;
Considere que o aluno será Aprovado se não reprovar por falta e a nota maior ou igual a 5,0;

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>

int matricula[10] = {2401, 2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2410};//matrículas dos 10 alunos
float p1[10] = {7.0, 0.4, 4.9, 8.8, 4.2, 5.5, 7.1, 1.1, 2.5, 6.7};//Primeira nota de cada aluno na sequência correspondente da matrícula
float p2[10] = {4.2, 3.2, 2.2, 6.1, 5.8, 6.7, 8.1, 2.9, 9.7, 4.5};//Segunda nota de cada aluno na sequência correspondente da matrícula
int faltas[10] = {0,  60,   0,   0,   4,   4,  10,  18,   2,  14};//Número de faltas de cada aluno na sequência correspondente da matrícula


int main()
{
    int matricula_read, i,posicao=-1;
    float media=0;

    // interface
    printf("Digite a matricula do aluno: ");
    scanf("%i", &matricula_read);
    printf("\n");

    //  Verifica a matricula com o banco de dados
    for(i=0; i<10; i++){
        if(matricula_read == matricula[i]){
            posicao=i;
            media=(p1[i]+p2[i])/2;
        }
    }

    // Interface
    printf("****** Boletim ******\n");

    // verifica a situação do aluno
    if(faltas[posicao] > 15){
        printf("Matricula: %i\n", matricula[posicao]);
        printf("Media: %.2f\n", media);
        printf("Faltas: %i\n", faltas[posicao]);
        printf("Resultado: Reprovado por falta\n");

    }else
        if(media > 5.0){
            printf("Matricula: %i\n", matricula[posicao]);
            printf("Media: %.2f\n", media);
            printf("Faltas: %i\n", faltas[posicao]);
            printf("Resultado: Aprovado\n");
        }else{
            printf("Matricula: %i\n", matricula[posicao]);
            printf("Media: %.2f\n", media);
            printf("Faltas: %i\n", faltas[posicao]);
            printf("Resultado: Reprovado por Nota\n");
        }

    return 0;
}
