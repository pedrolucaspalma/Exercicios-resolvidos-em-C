//Leia os números inteiros n e m e imprima os números ímpares no intervalo de n a m, inclusive.
//Inverta n com m, caso n > m.

#include <stdio.h>

int main()
{
    int n, m, contador, temporario,valor_atual, resto_por_2;
    
    contador = n;

    printf("N: ");
    scanf("%d\n", &n);
    printf("M: ");
    scanf("%d\n", &m);

    if( n>m)
    {
        temporario = m;
        m = n;
        n = temporario;
    }

    resto_por_2 = contador % 2;

    while (contador <= m)
    {
        if(resto_por_2 != 0)
        {
            printf("%d", contador);
        }
        contador++;
    }

}
