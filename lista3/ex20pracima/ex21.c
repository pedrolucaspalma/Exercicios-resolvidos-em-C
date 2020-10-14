// Leia os números inteiros n, k e r. Em seguida, imprima os k termos de uma PA que inicia em n e
// tem razão r.

#include <stdio.h>

int main(){

    int n, k, r, termo_final, quanto_acumula;

    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite k: ");
    scanf("%d", &k);
    printf("Digite r: ");
    scanf("%d", &r);

    termo_final = n + (k*r) - 1;

    for(n; n <= termo_final ; n = n + r){
        printf("%d\n", n);

    }
}