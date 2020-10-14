// olha la o bag

#include <stdio.h>

int main(){

    int n, i = 1;
    float h;

    printf("Digite N: ");
    scanf("%d", &n);

    if(n<=0){

        printf("Erro.");

    }

    else{

        for(i ;i <= n ; i++){

            h = h + 1/i;

        }

        printf("%f", h);

    }
}