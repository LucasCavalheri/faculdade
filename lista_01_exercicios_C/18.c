#include <stdio.h>

/*
    8. Leia dois valores para as variáveis A e B, efetuar a troca dos
    valores de forma que A passe a ter o valor de B e B passe a ter
    o valor de A
*/

int main()
{
    int a;
    int b;
    int aux;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("---ANTES---\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    aux = a;
    a = b;
    b = aux;

    printf("---DEPOIS---\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}