/*De acordo com a Matemática Financeira, o cálculo do valor da prestação P para amortização de um
financiamento de valor V em n prestações e a uma taxa de juros k é dada pelas fórmulas:
𝑃 =𝑉/𝑇

𝑇 =((1 + 𝑘)^n-1) / (𝑘 × (1 + 𝑘)^n)

Leia os valores de V, n e k e imprima o valor da prestação P. */

#include <math.h>
#include <stdio.h>

main()
{
    float v, n, k, T, P;

    printf("Digite v, n e k\n");
    scanf("%f %f %f",&v, &n , &k);

    T = (pow((1 + k),n)-1) / (k * pow((1 + k),n));

    P = v/T;

    printf("A prestacao vale %f",P);

}