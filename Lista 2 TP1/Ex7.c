//Um técnico está selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que 18 anos.
// Faça um programa para ler a idade e a altura de um atleta e exibir uma das mensagens: “selecionado” ou “não selecionado”.

#include <stdio.h>

main()
{

    float altura;
    int idade;

    printf("Digite sua altura.\n");
    scanf("%f",&altura);

    printf("Digite sua idade.\n");
    scanf("%d",&idade);

    if (altura >= 1.80)
    {
        if (idade < 18)
        {
            printf("Selecionado");
        }
        else
        {
            printf("Nao selecionado");
        }    
    }

    else
    {
        printf("Nao selecionado");
    }
    
}