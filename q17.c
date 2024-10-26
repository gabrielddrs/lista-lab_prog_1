#include <stdio.h>

int main(){

    float raio;
    const float pi = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("Diâmetro: %f\n", 2 * raio);
    printf("Circunferência: %f\n", 2 * pi * raio);
    printf("Área: %f\n", pi * raio * raio);

    return 0;
}