//Leia um número inteiro a com 4 dígitos e calcule outro número inteiro b que deverá ser o número a invertido. 
//Exemplo: se a = 5732 então b = 2375.

#include <stdio.h>

main()
{

    int n, m,cdu, c, du, d ,u; //numero, milhar, centenadezenaunidade, centena, dezenaunidade, dezena, unidade
   
    printf("Digite um numero de 4 algarismos\n");
    scanf("%d", &n);

    m = n / 1000;
    cdu = n - (m * 1000);
    c = cdu / 100;
    du = cdu - (c * 100);
    d = du / 10;
    u = du - (d * 10);

    printf("O inverso do numero digiado e %d%d%d%d", u,d,c,m);

}