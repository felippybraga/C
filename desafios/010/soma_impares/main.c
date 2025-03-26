#include <stdio.h>

int main(){
    int N1, N2, soma, troca;

    printf("digite dois numeros: \n");
    scanf("%d %d", &N1, &N2);

    if(N1 > N2) {
        troca = N1;
        N1 = N2;
        N2 = troca;
    }
    soma = 0;
    for(int i = N1+1; i < N2; i++){
        if(i % 2 != 0) {
            soma = soma + i;
        }

    }
    printf("\nsoma dos impares = %d", soma);
    return 0;
}
