#include <stdio.h>

int main()

{
       int num1, num2;
       int soma;
       
       //ler do teclado
       printf("\nentre com num1:");
       scanf("%d", &num1);
       
       printf("\nentre com num2:");
       scanf("%d", &num2);
       
       soma = num1 + num2;
       
       printf("\nsoma = %d\n", soma);
       
       return 0;
}