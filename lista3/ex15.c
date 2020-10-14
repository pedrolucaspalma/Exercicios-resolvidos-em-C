//Leia vários números positivos até o usuário digitar zero e imprima quantos são pares.

#include <stdio.h>

int main(){
    int n;
    int contador = 0;
    
    for( ; ; ){
        printf("N: ");
        scanf("%d", &n);
        if(n == 0){
            printf("Voce fechou o programa\n");
            break;
        }
        else{
            if(n % 2 == 0){
                contador++;
            }
        }
    }
    printf("Voce digitou %d numeros pares", contador);
}
