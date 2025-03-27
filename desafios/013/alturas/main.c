#include <stdio.h>

int main()
{
    int qtpessoas, nmenores = 0;
    double soma, media, percentualM;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &qtpessoas);

    char nomes[qtpessoas][50];
    int idades[qtpessoas];
    double alturas[qtpessoas];

    for (int i = 0; i < qtpessoas; i++) {
        printf("\nDados da %da pessoa:\n", i + 1);

        printf("Nome: ");
        while (getchar() != '\n');
        scanf(" %[^\n]", nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (int i = 0; i < qtpessoas; i++) {
        soma += alturas[i];
    }
    media = soma / qtpessoas;
    printf("\nAltura média: %.2lf\n", media);

    for (int i = 0; i < qtpessoas; i++) {
        if (idades[i] < 16) {
            nmenores++;
        }
    }

    percentualM = nmenores * 100.0 / qtpessoas;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualM);

    return 0;

}
