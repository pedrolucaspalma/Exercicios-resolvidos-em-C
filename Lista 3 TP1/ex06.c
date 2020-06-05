//Percorra os números de 1000 a 1999 e imprima aqueles que, quando divididos por 11 dão restoigual a 5.

#include <stdio.h>

#define valor_final 1999
#define valor_inicial 1000

main()
{
    int contador = valor_inicial , resto;

    while (contador <= valor_final)
    {
        resto =  contador % 11;
        if (resto == 5)
            {
                printf("%d\n", contador);
            }
        contador = contador + 1;
    }
}