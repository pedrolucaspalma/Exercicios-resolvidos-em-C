//O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. 
//Faça um programa para ler um número n inteiro de 4 dígitos e imprimir a primeira parte do número, a segunda parte e o valor da multiplicação das partes

#include <stdio.h>

main()
{

    int milhar_centena_dezena_unidade, milhar_centena, dezena_unidade, soma, quadrado_soma;

    printf("Digite um numero de 4 algarismos\n");
    scanf("%d", &milhar_centena_dezena_unidade);

    milhar_centena = (milhar_centena_dezena_unidade / 100);
    dezena_unidade =milhar_centena_dezena_unidade - (milhar_centena * 100);
    soma = milhar_centena + dezena_unidade;
    quadrado_soma = soma * soma;

    printf("A primeira parte vale %d, a segunda parte vale %d, suas somas valem %d e o quadrado da soma vale %d.", milhar_centena, dezena_unidade, soma, quadrado_soma);
}