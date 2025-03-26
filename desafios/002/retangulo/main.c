#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    double base, altura, area, perimetro, diagonal;

    printf("digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("digite o altura do retangulo: ");
    scanf("%lfd", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("Area do retangulo = %.4lf\n", area);
    printf("O perimetro do retangulo = R$%.4lf\n", perimetro);
    printf("O diagonal do retangulo = R$%.4lf\n", diagonal);


    return 0;
}
