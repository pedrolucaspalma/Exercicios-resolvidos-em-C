//Leia o valor do salário de uma pessoa e o valor de um financiamento pretendido.
//Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá imprimir "Financiamento Concedido";
// senão, ele deverá imprimir "Financiamento Negado".

#include <stdio.h>

main()
{

    float sal, fin;

    printf("Digite seu salário e o valor do financiamento que você deseja, respectivamente\n");
    scanf("%f %f", &sal, &fin);

    if(fin <= sal*5)
    {
        printf("Financiamento concedido");
    }
    else
    {
        printf("Financiamento negado");
    }
}