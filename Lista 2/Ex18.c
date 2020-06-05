#include <stdio.h>
#include <math.h>

main()
{
    int nota;

    printf("Digite sua nota\n");
    scanf("%f", &nota);

    switch(nota)
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