#include <stdio.h>

int main () {
    
    int n;
    float h = 0.0;

    printf("Digite N:");
    scanf("%d",&n);

    if (n <= 0){
        printf("\nErro");
    }
    else{
        
        for(int i = 1; i <= n; i++){

            h += (float) n/i;

        }

    }

    printf("H = %.10f", h);

}