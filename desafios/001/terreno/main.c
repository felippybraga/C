#include <stdio.h>

int main() {
    double largura, comprimento, valor, area, preco;

    printf("digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("digite o comprimento do terreno: ");
    scanf("%lfd", &comprimento);

    printf("digite o valor do metro quadrado do terreno: ");
    scanf("%lf", &valor);

    area = comprimento * largura;
    preco = area * valor;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preço do terreno = R$%.2lf\n", preco);


    return 0;
}
