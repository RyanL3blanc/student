#include <stdio.h>

int main()
{
    //declara variaveis
    int num1, num2;
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;
    
    //ler do teclado num1 e num2
    printf("\nEntre com num1:");
    scanf("%d", &num1);
    
    printf("\nEntre com num2:");
    scanf("%d", &num2);
    
    //calcular operacoes matematicas
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    divisao = (float)num1 / num2;
    
    //exibir o resultado
    printf("\nSoma %d + %d = %d", num1, num2, soma);
    printf("\nSubtracao %d - d% = %d", num1, num2, sub);
    printf("\nMultiplicacao %d * %d", num1, num2, mult);
    printf("\nDivisao %d / %d = %d", num1, num2, divisao);
    
    return 0;
}