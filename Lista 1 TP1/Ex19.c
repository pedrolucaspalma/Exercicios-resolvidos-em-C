//Leia um número inteiro n de 100 a 999 e imprima a soma dos dígitos que compõem o número

#include <stdio.h>

main()
{

    int centena_dezena_unidade, dezena_unidade, algunidade, algdezena, algcentena, soma_alg;

    printf("Digite um numero de 100 a 999\n");
    scanf("%d", &centena_dezena_unidade);

    algcentena = centena_dezena_unidade / 100;
    dezena_unidade = centena_dezena_unidade - (algcentena*100);
    algdezena = dezena_unidade /10;
    algunidade =dezena_unidade - (algdezena * 10);

    soma_alg = algunidade + algdezena + algcentena;

    printf("A soma dos algarismos vale %d", soma_alg);
}