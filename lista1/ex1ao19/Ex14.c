//Leia a e b e calcule a equação do 1º grau ax + b = 0, imprimindo o valor de x. 
//Considere a diferente de zero.

#include <stdio.h>

main ()
{

    float a, b, m = -1, x;

    printf("Digite as constantes a e b da funcao, respectivamente\n");
    scanf("%f %f",&a, &b);
    
    x = (b*m)/a;

    printf("O valor de x e %f", x);

    return 0;

}