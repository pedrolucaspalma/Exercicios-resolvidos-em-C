//Imprima todos os números de 1 até 40.

#include <stdio.h>

#define valor_final 40

main()
{

    int contador;
    
    contador = 1;
    while ( contador <= valor_final)
    {
       printf("%d\n", contador);
       contador += 1;
    }
}