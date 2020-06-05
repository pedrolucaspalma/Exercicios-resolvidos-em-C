#include <stdio.h>

main()
{
    int dig;

    printf("Digite o último digito da sua placa\n");
    scanf("%d", &dig);

    switch(dig)
    {
        case 0: printf("O IPVA vence dia 30/04/2020");
                break;
        case 1: printf("O IPVA vence dia 31/05/2020");
                break;
        case 2: printf("O IPVA vence dia 30/06/2020");
                break;
        case 3: printf("O IPVA vence dia 31/07/2020");
                break;
        case 4: printf("O IPVA vence dia 30/08/2020");
                break;
        case 5: printf("O IPVA vence dia 31/09/2020");
                break;
        case 6:
        case 7: printf("O IPVA vence dia 30/11/2020");
                break;
        case 8:
        case 9: printf("O IPVA vence dia 31/12/2020");
                break;
    }
}