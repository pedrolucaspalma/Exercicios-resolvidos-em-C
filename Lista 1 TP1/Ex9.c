/*    Calcule e imprima o volume de um cilindro que será enchido de água para um espetáculo de mágica. 
      Para isso, seu programa deverá ler o raio e a altura do cilindro. Considere: 𝑉𝑐 = 𝜋 × 𝑟^2 × ℎ       */

#include <stdio.h>

main()
{

    float v, r, h, pi = 3.14;
    
    printf("Digite o raio\n");
    scanf("%f", &r);
    printf("Digite a altura\n");
    scanf("%f", &h);

    v = pi*(r*r)*h;

    printf("O volume vale %f",v);
    
    return 0;

}