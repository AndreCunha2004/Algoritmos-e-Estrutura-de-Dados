// Este programa recebe os dados de um aluno e imprime o resultado do semestre
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[20], matricula[10];
    float nota_1, nota_2, nota_3;
    int faltas;

    // Leitura dos dados de cada aluno:
    printf("Nome do aluno: ");
    scanf("%s", &nome);

    printf("Matricula do aluno: ");
    scanf("%s", &matricula);

    printf("Quantidade de faltas: ");
    scanf("%i", &faltas);

    printf("Nota-1: ");
    scanf("%f", &nota_1);

    printf("Nota-2: ");
    scanf("%f", &nota_2);

    printf("Nota-3: ");
    scanf("%f", &nota_3);
    printf("\n");

    float media_parcial = (nota_1+nota_2+nota_3)/3;

    // Verifica se o aluno sera reprovado por falta
    if(faltas >= 16){
        char situacao[20] = {"reprovado por falta"};

        printf("Nome: %s\n", nome);
        printf("Matricula: %s\n", matricula);
        printf("Faltas: %i\n", faltas);
        printf("Nota-1: %.2f\n", nota_1);
        printf("Nota-2: %.2f\n", nota_2);
        printf("Nota-3: %.2f\n", nota_3);
        printf("Media-Parcial: %.2f\n", media_parcial);
        printf("Prova-Final: - \n");
        printf("Media-Final: %.2f\n", media_parcial);
        printf("Resultado: %s\n", situacao);
        printf("\n");

    // Verifica se o aluno foi aprovado ou reprovado por nota ou precisa de prova-final
    }else if(media_parcial >=20){
        if(media_parcial >= 60 && media_parcial <= 100){
            char situacao[20] = {"aprovado"};

            printf("Nome: %s\n", nome);
            printf("Matricula: %s\n", matricula);
            printf("Faltas: %i\n", faltas);
            printf("Nota-1: %.2f\n", nota_1);
            printf("Nota-2: %.2f\n", nota_2);
            printf("Nota-3: %.2f\n", nota_3);
            printf("Media-Parcial: %.2f\n", media_parcial);
            printf("Prova-Final: - \n");
            printf("Media-Final: %.2f\n", media_parcial);
            printf("Resultado: %s\n", situacao);
            printf("\n");

        // Faz a leitura da prova final para determinar resultado
        }else{
            float prova_final;

            printf("Nota da Prova-Final: ");
            scanf("%f", &prova_final);
            printf("\n");

            float media_final=(prova_final+media_parcial)/2;

            // Verifica se o aluno foi aprovado na prova final
            if(media_final >= 60 && media_final <= 100){
                char situacao[20] = {"aprovado"};

                printf("Nome: %s\n", nome);
                printf("Matricula: %s\n", matricula);
                printf("Faltas: %i\n", faltas);
                printf("Nota-1: %.2f\n", nota_1);
                printf("Nota-2: %.2f\n", nota_2);
                printf("Nota-3: %.2f\n", nota_3);
                printf("Media-Parcial: %.2f\n", media_parcial);
                printf("Prova-Final: %.2f\n", prova_final);
                printf("Media-Final: %.2f\n", media_final);
                printf("Resultado: %s\n", situacao);
                printf("\n");

            // Verifica se o aluno não fez a prova final (ou tirou zero)
            }else if(prova_final == 0){
                char situacao[20] = {"reprovado por nota"};

                printf("Nome: %s\n", nome);
                printf("Matricula: %s\n", matricula);
                printf("Faltas: %i\n", faltas);
                printf("Nota-1: %.2f\n", nota_1);
                printf("Nota-2: %.2f\n", nota_2);
                printf("Nota-3: %.2f\n", nota_3);
                printf("Media-Parcial: %.2f\n", media_parcial);
                printf("Prova-Final:- \n");
                printf("Media-Final: %.2f\n", media_parcial);
                printf("Resultado: %s\n", situacao);
                printf("\n");

            // Verifica a nota abaixo de 60 do aluno na prova final
            }else{
                char situacao[20] = {"reprovado por nota"};

                printf("Nome: %s\n", nome);
                printf("Matricula: %s\n", matricula);
                printf("Faltas: %i\n", faltas);
                printf("Nota-1: %.2f\n", nota_1);
                printf("Nota-2: %.2f\n", nota_2);
                printf("Nota-3: %.2f\n", nota_3);
                printf("Media-Parcial: %.2f\n", media_parcial);
                printf("Prova-Final: %.2f\n", prova_final);
                printf("Media-Final: %.2f\n", media_final);
                printf("Resultado: %s\n", situacao);
                printf("\n");
            }
        }
    // Verifica se o aluno não atingiu média suficiente p/ fzr a prova final.
    }else{
        char situacao[20] = {"reprovado por nota"};

        printf("Nome: %s\n", nome);
        printf("Matricula: %s\n", matricula);
        printf("Faltas: %i\n", faltas);
        printf("Nota-1: %.2f\n", nota_1);
        printf("Nota-2: %.2f\n", nota_2);
        printf("Nota-3: %.2f\n", nota_3);
        printf("Media-Parcial: %.2f\n", media_parcial);
        printf("Prova-Final:- \n");
        printf("Media-Final: %.2f\n", media_parcial);
        printf("Resultado: %s\n", situacao);
        printf("\n");
    }

    system("pause");
    return 0;
}
