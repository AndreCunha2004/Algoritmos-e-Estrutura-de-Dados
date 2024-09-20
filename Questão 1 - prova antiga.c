/*
Completo o programa que deve:
a) Mostrar a mensagem "Digite a matr�cula do aluno: " e depois ler um n�mero inteiro;
b) Se o n�mero n�o-nulo digitado n�o for correspondente a nenhuma matr�cula o programa deve mostrar a mansagem "Matr�cula inexistente!"
c) Se a matr�cula for encontrada o programa deve mostrar:
A Matr�cula do aluno, a nota da prova 1, a nota da prova 2, a m�dia das duas provas, e o resultdado(Aprovado ou Reprovado por Nota ou Reprovado por Falta)

Considere que o aluno ser� "Reprovado por Falta" sempre que o n�mero de faltas for superior a 15;
Considere que o aluno ser� Aprovado se n�o reprovar por falta e a nota maior ou igual a 5,0;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam_vet 10

    int matricula[tam_vet] = {20221001, 20221002, 20221003, 20221004, 20221005, 20221006, 20221007, 20221008, 20221009, 20221010};//matr�culas dos 10 alunos
    float p1[tam_vet] = {7.1, 0.4, 4.9, 8.8, 4.2, 5.5, 7.1, 1.1, 2.5, 6.7};//Primeira nota de cada aluno na sequ�ncia correspondente da matr�cula
    float p2[tam_vet] = {4.1, 3.2, 2.2, 6.1, 5.8, 6.7, 8.1, 2.9, 9.7, 4.5};//Segunda nota de cada aluno na sequ�ncia correspondente da matr�cula
    int faltas[tam_vet] = {0, 30, 0, 0, 4, 4, 10, 18, 2, 14};//N�mero de faltas de cada aluno na sequ�ncia correspondente da matr�cula

int main()
{
    int matricula_inserida, i, position=-1; // Identifica a posicao da matricula encontrada
    float media[10];    // Armazena a m�dia dos alunos
    char situacao[tam_vet][20];  // Armazena a situacao dos alunos

    // Leitura da matricula
    printf("Consulte a matricula de um aluno: ");
    scanf("%i", &matricula_inserida);
    printf("\n");

    // Atribui a media de cada aluno
    for(i=0; i<tam_vet;i++){
        media[i] = (p1[i]+p2[i])/2;
    }

    // Atribui a situacao de cada aluno
    for(i=0; i<tam_vet;i++){
        if(faltas[i]>15)
            strcpy(situacao[i],"Reprovado por falta");
        else
            if(media[i]>= 5.0){
                strcpy(situacao[i],"Aprovado");
            }else
                strcpy(situacao[i],"Reprovado por nota");
    }

    // Procura a matr�cula inserida
    for(i=0; i<tam_vet; i++){
         if(matricula[i] == matricula_inserida){
            position=i;
            break;
         }
    }

    // Verifica se a matr�cula foi encontrada
    if(position != -1){
        printf("****** Boletim ******\n");
        printf("Matricula: %i\n", matricula[position]);
        printf("Nota-1: %.2f\n", p1[position]);
        printf("Nota-2: %.2f\n", p2[position]);
        printf("Media: %.2f\n", media[position]);
        printf("Situacao: %s.\n", situacao[position]);

    }else{
        printf("Matricula nao encontrada!\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
