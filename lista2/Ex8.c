//Leia um número e imprima uma mensagem informando se ele é igual a 5, ou se é igual a 200, ou se
//é igual a 400, ou se ele está no intervalo de 500 a 1000 (inclusive)
//ou se ele não obedece a nenhuma dessas condições.

#include <stdio.h>

 main ()
 {
    int n;

    printf("Digite um numero\n");
    scanf("%d",&n);

   switch (n)
   {
       case 5 : printf("O numero e igual a 5");
       break;
       case 200: printf("O numero e igual a 200");
       break;
       case 400: printf("O numero e igual a 400");
       break;
       case 500 ... 1000: printf("O numero esta no intervalo de 500 a 1000");
       break;
       default : printf("O numero nao obedece nenhuma dessas condicoes");
       break;
   }
 }