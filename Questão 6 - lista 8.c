/*6 – Elabore um algoritmo para armazenar um cadastro com o nome, a idade e o endereço de uma pessoa em uma estrutura.
 O endereço deve ser representado por uma estrutura aninhada, o qual deve conter nome da rua, número, bairro e cidade.
  Ao final, exiba em tela todas as informações do cadastro.
*/
#include <stdio.h>
#include <stdlib.h>

struct endereco{
    char rua[20];
    int num;
    char bairro[20];
    char cidade[20];
};

struct aluno{
    char nome[20];
    int idade;
    struct endereco end;
};

struct aluno ler_dados(){
    struct aluno a;

    printf("Digite o nome do aluno: ");
    gets(a.nome);

    printf("Digite a idade do aluno: ");
    scanf("%i", &a.idade);
    setbuf(stdin,NULL);

    printf("*Digite o endereco do aluno*\n ");
    printf("Digite a rua: ");
    gets(a.end.rua);

    printf("Digite o numero: ");
    scanf("%i", &a.end.num);
    setbuf(stdin,NULL);

    printf("Digite o bairro: ");
    gets(a.end.bairro);

    printf("Digite a cidade: ");
    gets(a.end.cidade);

    return a;
}

void exibir(struct aluno a){

    printf("---- Dados ----\n");
    printf("Nome: %s\n", a.nome);
    printf("Idade: %i\n", a.idade);
    printf("Endereco: %s, \n", a.end.rua);
    printf("%i, ", a.end.num);
    printf("%s, ", a.end.bairro);
    printf("%s, ", a.end.cidade);
}

int main(){
    struct aluno aluno[2];

    for(int i=0; i<2; i++){
        printf("-- Aluno %i --\n", i+1);
        aluno[i]=ler_dados();
        printf("\n\n");

    }
    for(int i=0; i<2; i++){
        printf("\n");
        exibir(aluno[i]);
        printf("\n\n");
    }
    return 0;
}
