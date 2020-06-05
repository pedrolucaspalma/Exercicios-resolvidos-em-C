/* Leia uma temperatura e a escala (C-Celsius ou F- Fahrenheit) e converta-a para a outra escala. Ou
seja, se o usuário informar a temperatura em Celsius esta deverá convertida para Fahrenheit e viceversa */

#include <stdio.h>

/*#define A 32
#define B 212
#define C 100*/

main()
{   
    float tempi, tempc;
    int escala, A = 32, B = 212, C = 100;

    printf("Digite a temperatura e a escala (1 para fahrenheit e 2 para Celsius\n");
    scanf("%f %d", &tempi, &escala);

    switch (escala)
    {
        case 1: tempc = (tempi- A) * (C/(B-A));
                printf("A temperatura e de %f graus celsius", tempc);
                break;

        case 2: tempc = A + ((B-A)/C) * tempi;
                printf("A temperatura e de %f graus fahrenheit", tempc);
                break;
        
        default: printf("Erro");
                break;
    }
}