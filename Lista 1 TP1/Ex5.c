/*   Leia a quantidade de bytes de um arquivo e a velocidade de transmissão em bytes por segundo e
     imprimir quantos segundos serão necessários para fazer o download do arquivo.  */

#include <stdio.h>

main()
{

    float a, b, c;

    printf("Digite o tamanho do arquivo (em bytes) e, em seguida, digite a velocidade de transmissao (em bytes por segundo)\n");
    scanf("%f %f", &a, &b);
    
    c= a/b;

    printf("Levara %f segundos para que o download do arquivo seja concluido", c);

    return 0;
}