#include <stdio.h>

int main() {
    int n;
    double soma, media;

    printf("Quantos n�meros vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um n�mero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES: ");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", vet[i]);
    }
    printf("\n");

    soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    printf("SOMA = %.2lf\n", soma);

    media = soma / n;
    printf("MEDIA = %.2lf\n", media);

    return 0;
}

