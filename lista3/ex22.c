// Leia os números inteiros n, k e r. Em seguida, imprima os k termos de uma PG que inicia em n e
// tem razão r
// termoGeral = termoInicial * razão^(ordem-1)

#include <stdio.h>
#include <math.h>

int main(){

    int n, k, r, termo_final, quanto_acumula, fator_f;

    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite k: ");
    scanf("%d", &k);
    printf("Digite r: ");
    scanf("%d", &r);

    fator_f = pow(r, k-1);

    termo_final = n * fator_f;

    for(n; n <= termo_final ; n = n*r ){

        printf("%d\n", n);

    }
}