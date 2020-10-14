//Calcule e imprima o somatório dos números de n a m, sendo n e m maiores que zero e m > n.

#include <stdio.h>

int main()
{
    int n, m, soma, contador;
    
    contador = n;
    soma = 0;

    printf("N: \n");
    scanf("%d", &n);
    printf("M: \n");
    scanf("%d", &m);

    while (contador <= m)
    {
        soma += contador;
        contador++;
    }
    printf("O somatorio vale %d", soma);
}
