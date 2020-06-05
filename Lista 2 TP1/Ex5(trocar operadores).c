//Leia três valores a, b e c e imprima o maior e o menor deles. 
//Elabore uma solução sem usar os operadores lógicos, ou seja, usando somente os operadores relacionais.

#include <stdio.h>
main()
{
    float a, b, c;

    printf("Digite os valores a, b e c, respectivamente");
    scanf("%f %f %f", a, b, c);

    if (a > b && b > c) // A>B>C
    {
        printf("O maior numero e %f e o menor e %f", a, c);
    }
    else
    {
        if (a > b && b < c) // A>C>B
        {
            printf("O maior numero e %f e o menor e %f", a, b);
        }
        else
        {
            if (b > a && a > c)  // B>A>C
            {
                printf("O maior numero e %f e o menor e %f", b, c);
            }
            else
            {
                if (b > a && a < c) // B>C>A
                {
                    printf("O maior numero e %f e o menor e %f", b, a);
                }
                else
                {
                    if (c>a && a > b) // C>A>B
                    {
                        printf("O maior numero e %f e o menor e %f", c, b);
                    }
                    else
                    {
                        if (c>a && a < b) // C>B>A
                        {
                             printf("O maior numero e %f e o menor e %f", c, a);
                        }
                    }
                    
                }
            }
            
        }
    }
    