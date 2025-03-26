#include <stdio.h>

int main() {
    //para escriver/imprimir algo
    printf("Bom dia");
    printf("Boa noite");

    //para escrever algo pulando uma linha
    printf("Bom dia\n");
    printf("Boa noite\n");

    //para escrever uma variavel de numeros inteiros
    int x, y;
    x = 10;
    y = 20;
    printf("%d\n", x);
    printf("%d\n", y);

    //para variaveis com numeros quebrados
    double z;
    z = 2.3456;
    printf("%.2lf\n", z);

    return 0;
}
