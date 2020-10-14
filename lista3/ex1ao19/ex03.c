//Imprima os 50 primeiros números pares, não considerando o zero.
#include <stdio.h>

#define valor_final 100
void main()
{
    int contador;

    contador = 2;

    while (contador <= valor_final)
    {
        printf("%d\n", contador);
        contador = contador + 2;
    }
}