#include <stdio.h>
#include <math.h>

int main()
{
    int valor1, valor2, valor3, menor;

    printf("primeir valor: ");
    scanf("%d", &valor1);

    printf("segund valor: ");
    scanf("%d", &valor2);

    printf("terceiro valor: ");
    scanf("%d", &valor3);

    if(valor1 < valor2 && valor1 < valor3) {
        printf("MENOR = %d", valor1);
    } else if(valor2 < valor1 && valor2 < valor3) {
        printf("MENOR = %d", valor2);
    } else {
        printf("MENOR = %d", valor3);
    }


    return 0;
}
