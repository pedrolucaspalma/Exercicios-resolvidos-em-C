/*. Leia as notas de duas provas e de um trabalho (todos os valores entre 0 e 10) e a quantidade de
faltas, definindo e imprimindo se ele foi aprovado, reprovado, reprovado por falta ou se fará prova
final.

O aluno será reprovado se faltou a mais de 15 aulas.

Aluno será aprovado se não for reprovado por falta e sua média for maior ou igual a 7,0.

Caso tenha média menor que 4,0, então estará reprovado.

Se não for nenhuma dessas situações, então deverá fazer prova final.

O cálculo da média deve ser feito com peso 3 para a 1ª prova, peso 5 para a 2ª prova e peso 2 para o trabalho. */

#include <stdio.h>
#include <math.h>

main()
{
    float p1, p2, trab, media;
    int falta, media_arredondada;

    printf("Digite, respectivamente, as notas da sua primeira e segunda prova e do seu trabalho\n");
    scanf("%f %f %f", &p1, &p2, &trab);

    printf("Digite o numero de faltas\n");
    scanf("%d", &falta);

    media = ((p1*3)+(p2*5)+(trab*2))/10;

    media_arredondada = floor(media);

    if (falta>15)
    {
        printf("Situacao: Reprovado");
    }
    else
    {
        switch(media_arredondada)
        {
            case 1:
            case 2:
            case 3: printf("Situacao: Reprovado");
                    break;
            case 4:
            case 5:
            case 6: printf("Situacao: Prova Final");
                    break;
            case 7:
            case 8:
            case 9:
            case 10: printf("Situacao: Aprovado");
                    break;

        }
    }   
}

