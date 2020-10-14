/*  Leia 3 notas de um aluno e seus respectivos pesos. 
    Depois, calcule e imprima a média ponderada do aluno   */

#include <stdio.h>

main()
{

    float n1, n2, n3, p1, p2, p3, m;

    printf("Digite sua primeira nota\n");
    scanf("%f", &n1);
    printf("Digite sua segunda nota\n");
    scanf("%f", &n2);
    printf("Digite sua terceira nota\n");
    scanf("%f", &n3);
    printf("Digite o peso da sua primeira nota\n");
    scanf("%f", &p1);
    printf("Digite o peso da sua segunda nota\n");
    scanf("%f", &p2);
    printf("Digite o peso da sua terceira nota\n");
    scanf("%f", &p3);

    m = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

    printf("Sua media vale %f", m);

    return 0;
}