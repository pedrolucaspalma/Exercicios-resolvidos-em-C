//Leia o valor de um produto e o percentual de desconto e exiba seu novo valor com o desconto e o valor descontado.

#include <stdio.h>

void main()

{
    
    float vi, d, vd, vdtd;                              //Valor do produto = vi; percentual de desconto = d; valor do produto com desconto = vd; valor descontado = vdtd

    printf("Insira o valor do produto\n");
    scanf("%f", &vi);
    printf("Insira o percentual de desconto (valor sem simbolo de porcentagem)\n");
    scanf("%f", &d);
    vd = vi -(vi * (d/100));
    vdtd = vi - vd;
    printf("O valor do produto com desconto e de %f, e o valor abatido e de %f", vd, vdtd);

}