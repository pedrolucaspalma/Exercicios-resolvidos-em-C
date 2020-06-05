//Leia um número n com 8 dígitos, separe o dia, mês e ano do número lido, mostrando-os na tela.
//Exemplo: 25031949 imprime 25/03/1959

#include <stdio.h>

main()
{
    int dia_mes_ano,mes_ano, ano, mes, dia;

    printf("Digite um número inteiro de 8 dígitos\n");
    scanf("%d", &dia_mes_ano);

    dia = dia_mes_ano / 1000000; // = 12
    mes_ano = dia_mes_ano - (dia * 1000000); // dia*1000000 = 12000000 ; dia_mes_ano - 12000000 = 122000 
    mes = mes_ano /  10000; // 122000 /100000 = 12 
    ano = mes_ano - (mes * 10000);

    printf("%d/%d/%d", dia, mes, ano);
}