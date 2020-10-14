//Realize a conversão de km para milhas, imprimindo o resultado da conversão. Sabe-se que: 1 km = 0,621371 milhas

#include <stdio.h>

main()
{

    float vkm, vm ,a = 0.621371;

    printf("Digite o valor em km\n");
    scanf("%f", &vkm);
    vm = vkm * a;
    printf("O valor inserido, em milhas, vale %f",vm);

    return 0;
}

