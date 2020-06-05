//Leia 10 valores, um de cada vez, e conte quantos deles são divisíveis por 3 ou 5, mas não são pares.
//Ao final, imprima essa quantidade.

#include <stdio.h>

int main()
{
    int  contador, valor, resto_por_3, resto_por_5, resto_por_2, numeros_divisiveis;

    contador = 1;
    numeros_divisiveis = 0;

    while (contador <= 10)
    {
        printf("Digite um valor: \n");
        scanf("%d", &valor);

        resto_por_3 = valor % 3;
        resto_por_5 = valor % 5;
        resto_por_2 = valor % 2;

        if(resto_por_2 != 0 && (resto_por_3 == 0 || resto_por_5 == 0))
        {
            numeros_divisiveis++;
        }

       contador++;
    }
    printf("A quantidade de numeros impares divisiveis por 3 ou 5 dentre os valores digitados e %d",numeros_divisiveis);
}