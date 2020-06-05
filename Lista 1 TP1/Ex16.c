//Leia um número real x e imprima seu valor arredondado. 
//Por exemplo: se x = 3.2 imprimir 3, e se x = 3.5 ou maior imprimir 4

#include <stdio.h>

main()
{

    float a;

    printf("Digite um valor\n");
    scanf("%f", &a);
    printf("%.0f", a);

}