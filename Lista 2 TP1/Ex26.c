#include <stdio.h>

main()
{
    int ano, classe;
    float peso;

    printf("Digite o ano e o peso do seu automovel\n");
    scanf("%d %f",&ano, &peso);

    switch (ano)
    {
        case 0 ... 1970: if (peso <1200)
            {
                printf("Seu veiculo e classe 1 e a taxa e de R$16,50");
            }
            else
            {
                if (peso < 1700)
                {
                    printf("Seu veiculo e classe 2 e a taxa e de R$25,50");
                }
                else
                {
                    if (peso >= 1700)
                    {
                        printf("Seu veiculo e classe 2 e a taxa e de R$46,50");
                    }
                }
            break;
                
            }
        case 1971 ... 1979: if (peso <1200)
            {
                printf("Seu veiculo e classe 4 e a taxa e de R$27,00");
            }
            else
            {
                if (peso < 1700)
                {
                    printf("Seu veiculo e classe 5 e a taxa e de R$30,50");
                }
                else
                {
                    if (peso >= 1700)
                    {
                        printf("Seu veiculo e classe 6 e a taxa e de R$52,50");
                    }
                }
                
            }
            break;
        case 1980 ... 2020:if (peso <3600)
            {
                printf("Seu veiculo e classe 7 e a taxa e de R$19,50");
            }
            else
            {
                if (peso >= 3600)
                {
                    printf("Seu veiculo e classe 8 e a taxa e de R$52,50");
                }
            }
            break;
    }
}