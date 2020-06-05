/* Leia o comprimento e a largura de um terreno retangular, além do preço do metro quadrado de grama. Depois, calcule e imprima:
a) A área a ser coberta de grama.
b) O custo total de grama para gramar o terreno. */

#include <stdio.h>

main()
{

    float comp, l, p, a, c;

    printf("Digite o comprimento do terreno, em metros\n");
    scanf("%f", &comp);
    printf("Digite a largura do terreno, em metros\n");
    scanf("%f", &l);
    printf("Digite o preco do metro quadrado de grama, em reais\n");
    scanf("%f", &p);

    a = comp*l;
    c = a*p;
    printf("A area a ser coberta sera de %f metros quadrados, e o custo de cobrir essa area e de %f reais", a, c);

    return 0;

}