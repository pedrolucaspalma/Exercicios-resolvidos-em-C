//Leia o lado de um cubo, calcule e imprima seu volume

#include <stdio.h>

void main()
{
    int l, v;

    printf("Digite o valor do lado do cubo\n");
    scanf("%d", &l);
    v = l * l * l;
    printf("O volume do cubo vale %d",v);               //caso eu utilize &v, dá merda

}