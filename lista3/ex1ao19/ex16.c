// Leia vários números positivos até o usuário digitar zero e imprima quantos são ímpares e a soma deles.

#include <stdio.h>

int main(){
    int n;
    int contador = 0;
    int soma = 0;

    for( ; ; ){
        printf("N (insira 0 para fechar o programa):");
        scanf("%d", &n);
        if(n == 0){
            printf("Voce fechou o programa\n");
            break;
        }
        else{
            if(n % 2 == 1){
                contador++;
                soma += n;
            }
        }
    }
    printf("Voce digitou %d numeros impares e a soma deles vale %d", contador, soma);
}