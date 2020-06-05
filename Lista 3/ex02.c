// Imprima todos os números de 50 até 1

#include <stdio.h>

#define valor_final 1
main()
{
    int contador;

    contador = 50;

    while (contador >= valor_final)
    {
        printf("%d\n", contador);
        contador = contador - 1;
    }
}