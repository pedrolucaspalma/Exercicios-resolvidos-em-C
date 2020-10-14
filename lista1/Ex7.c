//Leia o raio de uma esfera, calcule e imprima seu volume

#include <stdio.h>

main()
{

    float a = 4, b = 2, c = 3.14, r, v;

    printf("Digite o raio da esfera\n");
    scanf("%f", &r);
    v=(a/b)*c*(r*r*r);
    printf("O volume vale %f", v);
    
    return 0;

}