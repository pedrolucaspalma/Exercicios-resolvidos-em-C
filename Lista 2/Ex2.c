//Leia um número inteiro n e informe se ele é divisível por 3 e por 7
#include <stdio.h>

main()
{

    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

  

    if ( n % 3 == 0)
    {
        if ( n% 7 == 0)
        {
        printf("O numero e divisivel por 3 e 7");
        }

        else
        {
        printf("O numero nao e divisivel por 3 e por 7");
        }
    }
    else
    {
        printf("O numero nao e divisivel por 3 e por 7");
    }
    
    
}