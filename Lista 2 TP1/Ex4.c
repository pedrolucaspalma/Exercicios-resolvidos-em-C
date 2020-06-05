//Leia dois números n e k e informe se n é divisível por k.
#include <stdio.h>

main()
{

    int n, k;

    printf("Digite, respectivamente, os numeros n e k\n");
    scanf("%d %d",&n, &k );
    
    if(n % k ==0)
    {
        printf("n e divisivel por k");
    }
    else
    {
        
        printf("n nao e divisivel por k");
        
    }
    
}