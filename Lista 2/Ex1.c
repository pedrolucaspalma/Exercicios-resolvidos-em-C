//Leia um número inteiro n e informe se ele é ou não divisível por 6.
#include <stdio.h>

main()
{

    int n, r;

    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    r = n%6;

    if(r != 0)
    {
    printf("O numero nao e divisivel por 6");
    }

    else
    {
    printf("O numero e divisivel por 6");
    }
}