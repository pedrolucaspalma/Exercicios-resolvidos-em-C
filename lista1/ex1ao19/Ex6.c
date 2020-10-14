//Leia uma temperatura em graus Celsius e converta-a em graus Fahrenheit

#include <stdio.h>

int main()
{

    float tempc, tempf, a = 32, b = 212, c = 100;                 //a=32, b=212 , c=100
    
    printf("Digite a temperatura em graus celsius\n");
    scanf("%f", &tempc);
    tempf = a+((b-a)/c)*tempc;
    printf("A temperatura e de %f graus fahrenheit", tempf);

    return 0;

}