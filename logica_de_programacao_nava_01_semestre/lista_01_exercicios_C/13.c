#include <stdio.h>

/*
    13. Escreva um programa em C que solicite um determinado
    número de segundos e, em seguida, imprima quantas horas,
    minutos e segundos ele representa.
*/

int main()
{
    int segundos;
    int horas;
    int minutos;
    int segundosRestantes;

    printf("Entre com o número de segundos: ");
    scanf("%d", &segundos);

    horas = (segundos) / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = (segundos) % 60;

    printf("%d segundos representa: %d horas, %d minutos e %d segundos\n", segundos, horas, minutos, segundosRestantes);

    return 0;
}