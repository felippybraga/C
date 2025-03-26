#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);

    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);

    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    printf("Qual seu nome? ");
    fgets(nome, 50, stdin);
    limpar_entrada();


    printf("Qual seu genero? ");
    scanf(" %c", &genero);


    printf("\n--- Dados Coletados ---\n");
    printf("Idade: %d\n", idade);
    printf("Salário: %.2lf\n", salario);
    printf("Altura: %.2lf\n", altura);
    printf("Nome: %s\n", nome);
    printf("Gênero: %c\n", genero);


    return 0;
}
