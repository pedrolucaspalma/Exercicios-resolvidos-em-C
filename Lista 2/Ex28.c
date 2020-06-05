//Leia três valores inteiros n, m e k e informe quantos números inteiros no intervalo n..m (inclusive)
//são múltiplos de k

#include <stdio.h>
#include <math.h>

main()
{
    int m, n, k, q1, q2, varq;

    printf("Digite tres valores m, n e k, respectivamente\n");
    scanf("%d %d %d", &m, &n, &k);

    q1 = floor(m / k);
    q2 = floor(n / k);

    varq = q1 - q2;

    printf("Existem %d multiplos de %d dentro do intervalo descrito",varq, k );
}