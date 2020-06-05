//Imprima uma tabela de conversão de polegadas para centímetros. 
//Deseja-se que a tabela conste valores desde 1 polegada até 20 polegadas inteiras.
// 1 polegada = 2,54 cm

#include <stdio.h>

int main()
{
    int contador, polegada;
    float centimetros;

    contador = 1;
    polegada = 1;

    while(contador <=20)
    {
        centimetros = (float) polegada * 2.54;

        printf("%d in = %f cm\n", polegada, centimetros);
        polegada++;
        contador++;
    }
}