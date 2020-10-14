// Entre com a idade de várias pessoas e imprima:
// • Total de pessoas com menos de 21 anos.
// • Total de pessoas com mais de 50 anos.

#include <stdio.h>

int main(){

    int idade;
    int menoresde21 = 0;
    int maioresde50 = 0;

    for( ; ; ){
        printf("Digite uma idade (digite 0 para sair): ");
        scanf("%d", &idade);

        if(idade == 0){
            printf("Voce encerrou o programa.\n");
            break;
        }

        else{

            if(idade < 21){
                menoresde21++;

            }

            else{

                if(idade > 50){
                    maioresde50++;
                }
                
            }
        }
    }
    printf("Nesse grupo tem %d pessoas com menos de 21 anos e %d pessoas com mais de 50 anos.", menoresde21, maioresde50);
}