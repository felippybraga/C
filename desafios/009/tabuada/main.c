#include <stdio.h>

int main()
{
    int valor, res, i;

    printf("deseja a tabuada para qual valor? ");
    scanf("%d", &valor);

    for(i = 1; i <= 10; i++){
        res = valor * i;
        printf("%d x %d = %d\n", valor, i, res);
    }



    return 0;
}
