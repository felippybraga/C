#include <stdio.h>
#include <math.h>

int main()
{
    double nota1, nota2, notafinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notafinal = nota1 + nota2;
    printf("Nota final = %.1lf\n", notafinal);

    if (notafinal < 60.00) {
        printf("REPROVADO\n");
    }

    return 0;
}
