/* Leia o ano atual e o ano de nascimento de uma pessoa e exiba a sua idade. A seguir, informe se a
pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 60 anos)
ou idosa (61 anos em diante). */

#include <stdio.h>

main()
{
    int atual, nascimento, idade;

    printf("Digite o ano atual e o ano de seu nascimento\n");
    scanf("%d %d", &atual, &nascimento);

    idade = atual - nascimento;

    if (idade <= 3)
    {
        printf("Voce e um bebe");
    }
    else
    {
        if(idade <=10 )
        {
        printf("Voce e uma crianca");
        }
        else
        {
            if (idade <=18)
            {
            printf("Voce e um adolescente");
            }
            else
            {
                if(idade <=60)
                {
                printf("Voce e um adulto");
                }
                else
                {
                    if(idade>= 61)
                    {
                    printf("Voce e um idoso");
                    }
                }
                
            }
            
        }

    }

}