//Leia dois valores de hora, minuto e segundo (h1, m1, s1, h2, m2, s2).
//Em seguida, imprima o intervalo entre esses dois horários em hora, minuto e segundo.
//Assuma que h2/m2/s2 é maior ou igual a h1/m1/s1.
//Exemplo: se h1 = 9, m1 = 45, s1 = 38, h2 = 15, m2 = 27 e s2 = 12 então a diferença é 05:41:34.

#include <stdio.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, dh, dm, ds;

    printf("Digite o valor inicial de hora:");
    scanf("%d", &h1);
    printf("Digite o valor inicial de minuto:");
    scanf("%d", &m1);
    printf("Digite o valor inicial de segundo:");
    scanf("%d", &s1);
    printf("Digite o valor final de hora:");
    scanf("%d", &h2);
    printf("Digite o valor final de minuto:");
    scanf("%d", &m2);
    printf("Digite o valor final de segundo:");
    scanf("%d", &s2);

    dh = h2 - h1;
    dm = m2 - m1;
    ds = s2 - s1;

    printf("A diferenca de tempo e %dh:%dm:%ds", dh, dm, ds);

    return 0;
}