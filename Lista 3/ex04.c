//Imprima os 30 primeiros ímpares

#include <stdio.h>

#define valor_final 60
main()
{
    int contador;

    contador = 1;

    while (contador <= valor_final)
    {
        printf("%d\n", contador);
        contador = contador + 2;
    }
}