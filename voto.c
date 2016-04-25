#include <stdio.h>

int main()
{
    int idade;
    
    printf("\nIdade:\n");
    scanf("%d",&idade);
    
    if(idade < 16)
    {
        printf("\nVoce nao pode votar\n");
    }
    else if(idade == 16 || idade == 17 || idade > 70)
    {
        printf("\nVoto facultativo\n");
    }
    else
    {
        printf("\nVoto obrigatorio\n");
    }
    
    return 0;
}