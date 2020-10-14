// Uma empresa classifica seus funcionários de acordo com um índice de produtividade: (1)
// Excelente, (2) Bom e (3) Regular. Cada nível acrescenta um abono ao salário base do funcionário
// de acordo com o seguinte:

// • Excelente: 40% do salário base
// • Bom: 20% do salário base
// • Regular: 5% do salário base

// Faça um programa que permita a entrada da matrícula, do salário base e o índice de produtividade
// de vários funcionários, até o usuário digitar matrícula zero ou negativa. Para cada funcionário
// imprima a sua matrícula e seu novo salário.

#include <stdio.h>

int main(){

    int matricula;
    int salario;
    int indice;

    for( ; ; ){
        printf("Insira a matricula\nDigite 0 para fechar o programa.\n");
        scanf("%d", &matricula);

        if(matricula <= 0 ){
            printf("O programa foi encerrado\n");
            break;
        }

        else{
            
            printf("Insira o salario:");
            scanf("%d", &salario);
            printf("Insira o indice de produtividade:");
            scanf("%d", &indice);

            switch(indice){
                case 1: salario *= 1.4;
                        printf("A matricula %d recebera um novo salario de %d reais\n",matricula, salario);
                        break;

                case 2: salario *= 1.2;
                        printf("A matricula %d recebera um novo salario de %d reais\n",matricula, salario);
                        break;

                case 3: salario *= 1.05;
                        printf("A matricula %d recebera um novo salario de %d reais\n",matricula, salario);
                        break;

                default : printf("Indice invalido\n");
                }
        }

    }
}