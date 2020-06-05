//Leia os números inteiros n e m e imprima os números ímpares no intervalo de n a m, inclusive.
//Inverta n com m, caso n > m.

#include <stdio.h>

int main()
{
    int n, m, contador, temporario,valor_atual, resto_por_2, numero_para_imprimir;
    
    contador = n;

    printf("N: ");
    scanf("%d", &n);
    printf("M: ");
    scanf("%d", &m);

    if( n>m)
    {
        temporario = m;
        m = n;
        n = temporario;
    }

    while (contador <= m)
    {
        resto_por_2 = contador % 2;

        if(resto_por_2 != 0)
        {
            printf("Imprimindo %d", contador);
        }
        contador++;
    }
}
