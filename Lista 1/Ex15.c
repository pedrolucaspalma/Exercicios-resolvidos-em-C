//Leia 3 variáveis inteiras a, b e c e faça um "rodízio" entre elas. 
//Ao final, a variável B deverá ter o valor da variável A, a variável C deverá ter o valor da variável B e a variável A deverá ter o valor da variável C

#include <stdio.h>

main()
{

    int a, b, c, x;

    printf("Digite 3 valores\n");
    scanf("%d %d %d", &a, &b, &c);

    x = a;
    a = b;
    b = c;
    c = x;
    x = 0;

    printf("a vale %d, b vale %d, c vale %d",a , b, c);
    return 0;
    
}