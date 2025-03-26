#include <stdio.h>
#include <math.h>

int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("dados da primeira pessoa\n");
    printf("nome: ");
    fgets(nome1, 50, stdin);

    printf("idade: ");
    scanf("%d", &idade1);

    printf("dados da segunda pessoa\n");
    printf("nome: ");
    fseek(stdin, 0, SEEK_END);
    fgets(nome2, 50, stdin);

    printf("idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2;

    printf("a idade media  de %s e %s eh de %.1lf anos", nome1, nome2, media);


    return 0;
}
