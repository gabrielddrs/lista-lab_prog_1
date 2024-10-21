#include <stdio.h>

int main(){
    float num;
    
    printf("Digite um número do tipo float:\n");
    scanf("%f", &num);

    printf("E o seu número com 2 pontos flutuantes é: %.2f", num);

    return 0;
};