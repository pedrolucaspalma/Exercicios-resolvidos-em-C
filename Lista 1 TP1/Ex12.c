/*    Leia o comprimento e a largura de um terreno retangular, além do preço do metro de arame
farpado. Depois, calcule e imprima:
a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno será cercado com 4
voltas de arame farpado.
b) O custo total com o arame farpado.      */

#include <stdio.h>

main()
{

    float comp, larg, perimetro, preco, custo, aramegasto, a = 2, b = 4; 

    printf("Digite o comprimento do terreno (em metros) e, em seguida, digite a largura (em metros)\n");
    scanf("%f %f", &comp, &larg);
    printf("Agora, digite o preco do metro de arame farpado\n");
    scanf("%f", &preco);

    perimetro = (comp + larg) * a;
    aramegasto = perimetro * b;
    custo = aramegasto * preco;

    printf("Serao gastos %f metros de arame farpado para cercar o terreno, e isso custara %f", aramegasto, custo);

    return 0;
}