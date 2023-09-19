#include <stdio.h>

/*
    8. Ler dois números reais e imprimir a média aritmética deles.
*/

int main() {
    double n1;
    double n2;
    double media;

    printf("Digite o primero número real: ");
    scanf("%lf", &n1);
    printf("Digite o segundo número real: ");
    scanf("%lf", &n2);

    media = (n1 + n2) / 2;

    printf("A média aritmética entre %.2lf e %.2lf é de: %.2lf\n", n1, n2, media);
    
    return 0;
}