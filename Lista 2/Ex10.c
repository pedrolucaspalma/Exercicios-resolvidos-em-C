/*Leia um número n e teste: se n for negativo, eleve n ao quadrado; caso contrário, calcule a raiz
quadrada de n. Ao final, imprima o resultado.*/

#include <stdio.h>
#include <math.h>

main()
{

    float n, resultado;

    printf("Digite n\n");
    scanf("%f",&n);

    if(n < 0)
    {
        resultado = n*n;
    }
    else
    {
        resultado = sqrt(n);

    }
    printf("O resultado e %f",resultado);
}