#include <stdio.h>
#include <math.h>

int main()
{
    int N1, N2;

    printf("digite dois numeros: \n");
        scanf("%d", &N1);
        scanf("%d", &N2);

    while(N1 != N2) {
        if(N1 < N2) {
            printf("\nCRESCENTE\n");
        } else {
            printf("\nDESCRESCENTE\ n");
        }

        printf("digite outros dois numeros: \n");
        scanf("%d", &N1);
        scanf("%d", &N2);
    }


    return 0;
}
