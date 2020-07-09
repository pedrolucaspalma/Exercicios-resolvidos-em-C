//Leia várias idades até o usuário digitar zero e imprima quantas pessoas são eleitoras obrigatórias.
 
 #include <stdio.h>

int main()
{
    int idade, eleitores;

    eleitores = 0;
    
    do{
        printf("Idade: ");
        scanf("%d", &idade);

        if(idade >= 18 && idade <= 70)
        {
            eleitores++;
        }

    }while (idade != 0);

    printf("%d sao eleitores obrigatorios.", eleitores);
}