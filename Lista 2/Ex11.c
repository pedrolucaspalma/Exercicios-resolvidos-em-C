/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. Fazer um
programa para ler um número n inteiro de 4 dígitos e imprimir se o número tem ou não essa
característica. Se n não tiver 4 dígitos, imprima uma mensagem de erro.*/

#include <stdio.h>
#include <math.h>

main()
{

    int num, milhar_cent, dez_uni, quoc,soma, quadrado;

    printf("Digite um numero de 4 digitos\n");
    scanf("%d", &num);

    quoc = num / 100;
    milhar_cent = floor(quoc);

    dez_uni = num % 100;

    soma = milhar_cent + dez_uni;
    quadrado = soma*soma;

    if ( num >= 1000 && num <10000)
    {
        if(num == quadrado)
        {
        printf("O numero tem essa caracteristica");
        }
        else
        {
        printf("O numero nao tem essa caracteristica");
        }
    }
    else
    {
        printf("Erro: o numero nao tem 4 algarismos ");
    }
}