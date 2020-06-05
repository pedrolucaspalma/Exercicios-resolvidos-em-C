/* Leia a nota de um aluno e transforme-a em um conceito. As notas 10,0 a 9,0 receberão conceito A,
as notas de 8,9 a 7,0 receberão conceito B, as notas de 6,9 a 5,0 receberão conceito C e abaixo de
5,0 conceito D. Caso a nota seja inválida, imprima “Inválida”. */

#include <stdio.h>
#include <math.h>

main()
{
    float nota;
    int nota_arredondada;

    printf("Digite sua nota\n");
    scanf("%f", &nota);

    nota_arredondada = floor(nota);

    switch(nota_arredondada)
    {
        case 1:
        case 2:
        case 3:
        case 4: printf("Condeito D");
                break;

        case 5:
        case 6: printf("conceito C");
                break;
        
        case 7:
        case 8: printf("conceito B");
                break;
        case 9:
        case 10: printf("conceito A");
                break;
        
        default: printf("invalida");
                 break;
    }
}