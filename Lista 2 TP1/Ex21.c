//Olha o enunciado la no paranaue

#include <stdio.h>
#include <stdio.h>

main()
{
    #include <stdio.h>

   int forma_de_pagamento;
   float preco, valor_do_pagamento, valor_parcela;
   
   printf("Informe o preco do produto\n");
   scanf("%f", &preco);

   printf("Selecione uma opcao de pagamento e digite o numero correspondente a forma escolhida:\n 1-A vista, dinheiro ou cheque (10% de desconto)\n 2-A vista, cartao de credito (5% de desconto) \n 3-Em 2 vezes, preço normal, sem juros\n 4-Em 3 vezes, preço normal +10% de juros\n");
   scanf("%d", &forma_de_pagamento);

   switch (forma_de_pagamento)
   {
       case 1: valor_do_pagamento = preco * 0.9;
                printf("O valor a ser pago e %f reais",valor_do_pagamento);
                break;

        case 2: valor_do_pagamento = preco * 0.95;
                printf("O valor a ser pago e %f reais" , valor_do_pagamento);
                break;

        case 3: valor_do_pagamento = preco;
                valor_parcela = valor_do_pagamento / 2;
                printf("O valor total a ser pago e %f reais. Esse valor sera pago em 2 parcelas de %f reais", valor_do_pagamento, valor_parcela);
                break;

        case 4: valor_do_pagamento = preco * 1.1;
                valor_parcela = valor_do_pagamento / 3;
                printf("O valor total a ser pago e %f. Esse valor sera pago em 3 parcelas de %f reais", valor_do_pagamento, valor_parcela);
                break;
   }

}