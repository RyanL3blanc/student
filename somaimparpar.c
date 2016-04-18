#include <stdio.h>

int main()

{
    int num;
    int resto;

    //ler no teclado
    printf("\nentre com num:");
    scanf("%d", &num);
    
    resto = num % 2;
    
    if(resto == 0) 
    {
        printf("\nnumero par");
    }
    else 
    {
        printf("\nnumero impar");
    }
    
    return 0;
        
}