//Leia a base e a altura de um triângulo, calcule e imprima sua área

#include <stdio.h>

main()
{

    float base, altura, area;

    printf("Digite o valor da base do triangulo\n");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo\n");
    scanf("%f", &altura);
    area = (base * altura)/2;
    printf("A area do triangulo vale %f ",area);

    return 0;
}
