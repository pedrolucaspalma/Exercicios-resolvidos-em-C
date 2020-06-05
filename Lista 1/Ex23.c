//Leia dois valores de hora, minuto e segundo (h1, m1, s1, h2, m2, s2).
//Em seguida, imprima o intervalo entre esses dois horários em hora, minuto e segundo.
//Assuma que h2/m2/s2 é maior ou igual a h1/m1/s1.
//Exemplo: se h1 = 9, m1 = 45, s1 = 38, h2 = 15, m2 = 27 e s2 = 12 então a diferença é 05:41:34.

#include <stdio.h>

main()
{
    int h1, m1, s1, h2, m2, s2, dh, dm, ds;

    printf("Digite os valores iniciais de hora, minuto e segundo\n");
    scanf("%d, %d, %d", &h1,&m1,&s1);
    printf("Digite os valores finais de hora, minuto e segundo\n");
    scanf("%d, %d, %d", &h2, &m2, &s2);

    dh = h2 - h1;
    dm = m2 - m1;
    ds = s2 - s1;

    printf("A diferenca de tempo e %d:%d:%d", dh, dm, ds);
}