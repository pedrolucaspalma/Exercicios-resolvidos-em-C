//Leia três valores d, m e a e informe se d, m e a formam uma data válida

#include <stdio.h>

main()
{
    int d, m, a;

    printf("Digite tres valores d, n e a, respectivamente\n");
    scanf("%d %d %d", &d, &m, &a);

    

    if (d > 0 && m > 0 && a > 0)
    {
        if (m >= 1 && m <=12 && d >= 1 && a >= 1)
        {
            if (a % 100 != 0 && a % 4 == 0) //caso do ano bissexto
            {
                switch (m)
                {
                    case 1: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 2: if(d<=29)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 3: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 4: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 5: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 6: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 7: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 8: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 9: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 10: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 11: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 12: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;
                }

            }
            else // ano comum
            {
                switch (m)
                {
                    case 1: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 2: if(d<=28)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 3: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 4: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 5: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 6: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 7: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 8: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 9: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 10: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 11: if(d<=31)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;

                    case 12: if(d<=30)
                    {
                        printf("Data valida");
                    }
                    else
                    {
                        printf("Data invalida");
                    }
                    break;
                }
            }
        }
        else
        {
            printf("Data invalida");
        }
        
    }
    else
    {
        printf("Data invalida");
    }   
}