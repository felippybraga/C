#include <stdio.h>

int main()
{
    int N, num;

    printf("quanto numeros voce vai digitar?");
    scanf("%d", &N);

    int vet[N];
    for(int i = 0; i < N; i++) {
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");
    for(int i = 0; i < N; i++) {

        if(vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}
