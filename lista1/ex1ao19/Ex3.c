//Leia o peso e altura de uma pessoa, calcule e imprima seu IMC. Sabe-se que IMC = peso/altura^2

#include <stdio.h>

void main()

{

    float alt, peso, IMC;

    printf("Digite sua altura\n");
    scanf("%f", &alt);
    printf("Digite seu peso\n");
    scanf("%f", &peso);
    IMC = peso/(alt*alt);
    printf("Seu IMC e %f", IMC);
    
}