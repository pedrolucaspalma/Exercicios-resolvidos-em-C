#include <stdio.h>

main()
{
    int dig;

    printf("Digite o último digito da sua placa\n");
    scanf("%d", &dig);

    if (dig == 0)
    {
        printf("O IPVA vence dia 30/04/2020");
    }
    else
    {
        if (dig == 1)
        {
            printf("O IPVA vence dia 31/05/2020");
        }
        else
        {
            if (dig == 2)
            {
                printf("O IPVA vence dia 30/06/2020");
            }
            else
            {
                if (dig == 3)
                {
                    printf("O IPVA vence dia 31/07/2020");
                }
                else
                {
                    if (dig == 4)
                    {
                        printf("O IPVA vence dia 30/08/2020");
                    }
                    else
                    {
                        if (dig == 5)
                        {
                            printf("O IPVA vence dia 30/09/2020");
                        }
                        else
                        {
                            if (dig == 6 || dig ==7)
                            {
                                printf("O IPVA vence dia 30/11/2020");
                            }
                            else
                            {
                                if(dig == 8 || dig == 9)
                                {
                                    printf("O IPVA vence dia 31/12/2020");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}