#include <stdio.h>

int main()
{
    int l, c;

    printf("qual a quantidade de linhas da matriz? ");
    scanf("%d", &l);
    printf("qual a quantidade de colunas da matriz? ");
    scanf("%d", &c);

    double mat[l][c];
    double vet[l];

    for(int i = 0; i < l; i++) {
        printf("digite os elementos da %da linha: \n", i + 1);
        for(int j = 0; j < c; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    for(int i = 0; i < l; i++) {
        vet[i] = 0;
        for(int j = 0; j < c; j++) {
            vet[i] = vet[i] + mat[i][j];
        }
    }

    printf("VETOR GERADO\n");
    for(int i = 0; i < l; i++) {
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
