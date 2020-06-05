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
        case 0 ... 19: printf("Voce esta abaixo do peso");
        break;
        case 20 ... 25: printf("Voce esta com o peso ideal");
        break;
        case 26 ... 30: printf("Voce esta acima do peso");
        break;
        case 31 ... 35: printf("Voce esta obeso");
        break;
        default: printf("Voce tem obesidade morbida");
        break;
    }
}