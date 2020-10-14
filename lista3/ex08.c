//Leia 10 valores, um de cada vez, e conte quantos deles estão no intervalo [10, 20] e quantos deles
//estão fora do intervalo. Ao final, imprima estas informações.

#include <stdio.h>

int main()
{
    int contador, diferenca_10, diferenca_20, valores_validos;
    float valor;

    contador = 1;
    valores_validos = 0;

    while(contador <= 10)
    {
        printf("Valor: \n");
        scanf("%f", &valor);

        diferenca_10 = valor - 10; // precisa dar >= 0
        diferenca_20 = valor - 20; // precisa dar <= 0
        //Ex: (11) 11- 10 = 1 .... 11 - 20 = -9 VALIDO
        //Ex: (9) 9 - 10 = -1 .... 9 - 20 = -11 INVALIDO
        //Ex: (21) 21 - 10 = 11 .... 21 - 20 = 1 INVALIDO

        if(diferenca_10 >=0 && diferenca_20 <= 0)
        {
            valores_validos++;
        }
        contador++;
    }
    printf("%d numeros estao no intervalo descrito", valores_validos);
}