#include <stdio.h>

/*
    15. Para se calcular o volume de um cilindro usamos a seguinte
    fórmula: 𝜋 × 𝑟𝑎𝑖𝑜² × 𝑎𝑙𝑡𝑢𝑟𝑎, faça um programa que dado a
    altura de uma lata e seu raio, calcule seu volume.
*/

int main()
{   
    double PI = 3.14157;
    double altura;
    double raio;
    double volume;

    printf("Digite a altura da lata: ");
    scanf("%lf", &altura);
    printf("Digite o seu raio: ");
    scanf("%lf", &raio);

    volume = PI * (raio * raio) * altura;

    printf("O Volume é de: %.3lf\n", volume);
    
    return 0;
}