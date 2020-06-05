/*. Sabendo que um caixa eletrônico possui notas de R$ 10, R$ 20, R$ 50 e R$ 100, leia um valor que
representa a quantidade de dinheiro que o cliente deseja sacar e imprima a quantidade necessária de
cada uma dessas notas para formar o valor desejado. A quantidade total de notas deve ser a mínima
possível. Assuma que a quantidade fornecida pelo cliente é sempre múltipla de 10.*/

#include <stdio.h>

main()
{

    int saque,n100, n50, n20, n10;

    printf("Digite o quanto deseja sacar\n");
    scanf("%d", &saque);

    n100 = saque/100;
    n50 = (saque%100)/50;
    n20 = ((saque%100)%50)/20;
    n10 = (((saque%100)%50)%20)/10;

    printf("voce recebera %d nota(s) de 100, %d nota(s) de 50, %d nota(s) de 20 e %d nota(s) de 10", n100, n50, n20, n10);

}