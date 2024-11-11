/*Elabore um algoritmo para armazenar um cadastro com o nome, a idade e o
 endereço de uma pessoa em uma estrutura. O endereço deve ser representado por
  uma estrutura aninhada, o qual deve conter nome da rua, número, bairro e cidade.
   Ao final, exiba em tela todas as informações do cadastro.

    Autor: André Cunha - Enpro 4
*/
#include <stdio.h>

struct End{
    char rua[50];
    int numero;
    char bairro[20];
    char cidade[20];
};

struct Cadastro {
    char nome[20];
    int idade;
    struct End endereco;
};


int main()
{
struct Cadastro pessoa;

    printf("----- CADASTRE-SE -----");

   // Lendo os dados do usuário
    printf("Digite o nome: ");
    gets(pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    setbuf(stdin,NULL);

    printf("Digite a rua: ");
    gets(pessoa.endereco.rua);

    printf("Digite o número: ");
    scanf("%d", &pessoa.endereco.numero);
    setbuf(stdin,NULL);

    printf("Digite o bairro: ");
    gets(pessoa.endereco.bairro);

    printf("Digite a cidade: ");
    gets(pessoa.endereco.cidade);

    // Exibindo os dados
    printf("\nDados cadastrados:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco:\n");
    printf("  Rua: %s, Numero: %d\n", pessoa.endereco.rua, pessoa.endereco.numero);
    printf("  Bairro: %s, Cidade: %s\n", pessoa.endereco.bairro, pessoa.endereco.cidade);

    return 0;
}
