/*
Complete o programa que deve:
a) Mostrar a mensagem "Digite a matrícula do aluno: " e depois ler um número inteiro;
b) Se o número não-nulo digitado não for correspondente a nenhuma matrícula o programa deve mostrar a mansagem "Matrícula inexistente!"
c) Se a matrícula for encontrada o programa deve mostrar:
A Matrícula do aluno, a nota da prova 1, a nota da prova 2, a média das duas provas, e o resultdado(Aprovado ou Reprovado por Nota ou Reprovado por Falta)

Considere que o aluno será "Reprovado por Falta" sempre que o número de faltas for superior a 15;
Considere que o aluno será Aprovado se não reprovar por falta e a nota maior ou igual a 5,0;
*/

    // Autor: André Cunha
#include <stdio.h>
#include <locale.h>
#include <string.h>

int matricula[10] = {20221001, 20221002, 20221003, 20221004, 20221005, 20221006, 20221007, 20221008, 20221009, 20221010};//matrículas dos 10 alunos
float p1[10] = {7.1, 0.4, 4.9, 8.8, 4.2, 5.5, 7.1, 1.1, 2.5, 6.7};//Primeira nota de cada aluno na sequência correspondente da matrícula
float p2[10] = {4.1, 3.2, 2.2, 6.1, 5.8, 6.7, 8.1, 2.9, 9.7, 4.5};//Segunda nota de cada aluno na sequência correspondente da matrícula
int faltas[10] = {0, 30, 0, 0, 4, 4, 10, 18, 2, 14};//Número de faltas de cada aluno na sequência correspondente da matrícula


int main()
{
    setlocale(LC_ALL,"Portuguese");

    int matricula_read;
    float media[10]; // Banco de dados da media dos alunos
    char situacao[20];  // Variavel única que determina aprovado ou reprovado
    int i, position=-1;

    // Leitura da matricula
    printf("Digite a matricula do aluno: ");
    scanf("%i", &matricula_read);
    printf("\n");

    // Calculo de media de cada aluno
    for(i=0; i<10; i++)
        media[i]=(p1[i]+p2[i])/2;

    // Verifica a falta e a media para atribuir a situacao do aluno de acordo com as condicões
    for(i=0; i<10; i++){
        if(faltas[i]>15){
            strcpy(situacao,"Reprovado por falta");
        }
        else
            if(media[i]>= 5.0){
                strcpy(situacao,"Aprovado");
            }
            else
                strcpy(situacao,"Reprovado por nota");
    }

    // Verifica a matricula do aluno para imprimir resultado
    for(i=0; i<10; i++)
        if(matricula[i] == matricula_read){
           position=i;
           break;
        }

    // Verifica se a matricula coincidiu com o banco de dados
    if(position>0){
        printf("****** Boletim ******\n");
        printf("Matricula: %i\n", matricula[i]);
        printf("Nota-1: %.2f\n", p1[i]);
        printf("Nota-2: %.2f\n", p2[i]);
        printf("Media: %.2f\n", media[i]);
        printf("Situacao: %s.\n", situacao);
        }

    else
        printf("Matricula nao encontrada\n");

    return 0;
}
