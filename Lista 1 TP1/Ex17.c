//Leia dois inteiros x e y e imprima o maior múltiplo de x menor ou igual a y.
//Exemplo: se x = 9 e y= 38, então o resultado é 36.

#include <stdio.h>

main()
{
    int D, d, r, nD;

    printf("Digite, nessa ordem, o Dividendo e o Divisor\n");
    scanf("%d %d",&D, &d);
    r = D % d;
    nD = D - r;

    printf("O Dividendo mais proximo e %d", nD);
}