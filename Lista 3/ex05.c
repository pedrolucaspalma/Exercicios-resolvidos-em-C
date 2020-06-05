//Imprima os 20 primeiros múltiplos de 5, desconsiderando o zero.

#include <stdio.h>

#define valor_final 100
main()
{
    int contador;

    contador = 5;

    while (contador <= valor_final)
    {
        printf("%d\n", contador);
        contador = contador + 5;
    }
}