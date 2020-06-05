//Em uma disputa, um carro parte do repouso e percorre uma pista de 1 km em um tempo t.
//Leia o valor de t e calcule a aceleração do carro em metros/s2.

#include <stdio.h>

main()
{
    float t, aceleracao;


    printf("Digite o tempo\n");
    scanf("%f", &t);

    aceleracao = 2000/(t*t);
    
    printf("A aceleracao vale %f", aceleracao);

}