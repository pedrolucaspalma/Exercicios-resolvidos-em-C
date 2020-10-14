//Leia um número inteiro n e informe quantos dígitos ele tem.

#include <stdio.h>

int n, divisor, resto, contador, digitos;

int main()
{

    printf("N: ");
    scanf("%d", &n);

    contador = 1;
    divisor = 10;

    do{

        resto = n /divisor;
        divisor = divisor * 10;
        contador++;

    } while (resto > 0);

    digitos = contador -1;

    printf("O numero tem %d digitos", digitos);
}
