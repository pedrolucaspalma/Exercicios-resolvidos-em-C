//Leia vários números positivos até o usuário digitar zero e, para cada número, imprima a sua raiz
//quadrada ou uma mensagem de erro, caso não seja possível calculá-la.

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float raizN;
    for( ; ; ){
        printf("N: ");
        scanf("%d", &n);
        if(n == 0){
            printf("Voce fechou o programa\n");
            break;
        }
        else{
            if(n < 0){
                printf("Erro\n");
            }
            else{
                raizN = sqrt(n);
                printf("%f\n", raizN);
            }
        }
    }
}