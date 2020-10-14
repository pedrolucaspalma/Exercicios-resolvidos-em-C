//enunciado na lista

#include <stdio.h>
#include <math.h>

main()
{
    float peso, altura, imc;
    int imc_arredondado;

    printf("Digite seu peso e sua altura\n");
    scanf("%f %f", &peso, &altura);

    imc = peso/(altura * altura);

    imc_arredondado = floor(imc);

    switch (imc_arredondado)
    {
        case 0: printf("Voce esta abaixo do peso");
                break;
        case 1: 
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20: printf("Voce esta com o peso ideal");
                 break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26: printf("Voce esta acima do peso");
                 break;
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35: printf("Voce esta obeso");
                 break;
        default: printf("Voce tem obesidade morbida");
                 break;
    }
}