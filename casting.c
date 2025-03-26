#include<stdio.h>

int main() {
    //divisao inteira
    int a, b, resultado;
    a = 5;
    b = 2;
    resultado = a / b;
    printf("%d\n", resultado);

    //divisao fracionaria
    int x, y;
    double res;
    x = 5;
    y = 2;
    res = (double)x / y;
    printf("%.1lf\n", res);

    //convertendo numero inteiro em fracao
    double p;
    int q;
    p = 5.0;
    q = (int) p;
    printf("%d\n", q);


    return 0;
}
