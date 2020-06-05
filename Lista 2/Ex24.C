/* Calcule e imprima o salário semanal de uma pessoa, determinado pelas seguintes condições: se o
número de horas trabalhadas for de até 40h, a pessoa recebe R$15,00 por hora, senão a pessoa
recebe R$600,00 mais R$21,00 para cada hora trabalhada acima de 40h */

#include <stdio.h>

const int FIXO = 600;
main()
{

    int hora, difhora;
    float sal;

    printf("Digite o numero de horas trabalhadas\n");
    scanf("%d", &hora);

    switch(hora)
    {
        case 0 ... 40: sal = 15 * hora;
                        printf("O  seu salario semanal sera de %f", sal);
                        break;

        case 41 ... 168: difhora = hora - 40;
                         sal = difhora * 21 + FIXO;
                         printf("O seu salario semanal sera de %f", sal);
                         break;
    }
}