/*Em um mercado de peças de baixo preço, cada comprador só pode comprar um tipo de peça por
vez, mas não tem limite da quantidade de peças. Construa um programa que entre com a
quantidade de peças e o valor de cada peça. Se o total for maior que R$ 200,00, o cliente terá um
desconto de 20%. Imprima o valor total a pagar.*/

#include <stdio.h>

main()
{

    int numeropecas;
    float preco, totalpre, totalpos;

    printf("Digite o numero de pecas a ser comprado\n");
    scanf("%d", &numeropecas);

    printf("Digite o preco de cada peca\n");
    scanf("%f", &preco);

    totalpre = numeropecas*preco;

    if(totalpre > 200)
    {

        totalpos = totalpre *0.8;
    }
    else
    {
        totalpos = totalpre;
    }
    
    printf("O valor a ser pago e %f", totalpos);
}