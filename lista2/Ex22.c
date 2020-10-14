/*Leia o número de horas trabalhadas e o valor da hora de um trabalhador e imprima o salário bruto e
líquido, sabendo que o salário líquido é igual ao salário bruto menos o IR. O desconto do IR segue
as seguintes regras:
• Salário bruto menor ou igual a R$ 1900,00: desconto ZERO
• Salário bruto maior que R$1900,00 e menor ou igual a R$ 4300,00: desconto de 10%
• Salário bruto maior que R$4300,00 e menor ou igual a R$ 5800,00: desconto de 15%
• Salário bruto maior que R$5800,00: desconto de 27,5% */

#include <stdio.h>

main()
{
    float valor_hora, sal_bruto, sal_liq;
    int horas;

    printf("Digite quantas horas voce trabalha e o valor da sua hora\n");
    scanf("%d %f", &horas, &valor_hora);

    sal_bruto = horas * valor_hora;

    if(sal_bruto <= 1900)
    {
        sal_liq = sal_bruto;
        printf("Seu salario liquido e de %f reais.", sal_liq);
    }

    else
    {
        if(sal_bruto <= 4300)
        {
            sal_liq = sal_bruto * 0.9;
            printf("Seu salario liquido e de %f reais.", sal_liq);
        }
        else
        {
            if(sal_bruto <= 5800)
            {
                sal_liq = sal_bruto * 0.85;
                printf("Seu salario liquido e de %f reais.", sal_liq);
            }
            else
            {
                sal_liq = sal_bruto * 0.725;
                printf("Seu salario liquido e de %f reais.", sal_liq);
            }
        }
    }
}