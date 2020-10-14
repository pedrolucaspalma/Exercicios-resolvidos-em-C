//Calcule e imprima o n-ésimo termo an de uma PA de razão r.
//Para isso, seu programa deverá ler o 1º termo a1, a quantidade n de termos e a razão r. Considere: an = a1 + (n-1).r, onde n é natural. 

#include <stdio.h>

main()
{

    int a1, r, n, an, b = 1;
    

    printf("Digite o primeiro valor e a razao da progressao aritmetica\n");
    scanf("%d %d",&a1, &r);
    printf("Digite um valor para n para saber o termo correspondente\n");
    scanf("%d",&n);

    an = a1 + (n-b)*r;

    printf("O termo vale %d", an);
    
    return 0;

}