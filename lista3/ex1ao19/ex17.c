// Leia o número da conta e o saldo de vários clientes, até o usuário digitar zero. A cada entrada
// deverá ser apresentada a mensagem “positivo” ou “negativo”, caso o saldo seja positivo ou
// negativo. Ao final, deverá ser impresso o percentual de contas com saldo negativo.

#include <stdio.h>

int main(){
    int numeroconta;
    int saldoconta;
    float totalcontas = 0;
    float contasnegativas = 0;
    float porcentagemnegativa;
    // int contaspositivas = 0;

    for( ; ; ){

        printf("Digite o numero da conta (digite 0 para fechar o programa): ");
        scanf("%d", &numeroconta);

        if(numeroconta == 0){
            printf("Voce encerrou o programa\n");
            break;
        }

        else{

            printf("Digite o seu saldo: ");
            scanf("%d", &saldoconta);
            totalcontas++;

            if(saldoconta >= 0){

                printf("Positivo\n");
                // contaspositivas++;
            }

            else{

                printf("Negativo\n");
                contasnegativas++;

            }
        }
    }

    porcentagemnegativa = contasnegativas/totalcontas;
    porcentagemnegativa *= 100;
    printf("A porcentagem de contas negativas e de %f por cento.", porcentagemnegativa);
    
}