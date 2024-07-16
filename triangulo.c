#include <stdio.h>

float calculate(float a, float b);

int main(void)
{
    float base, altura;

    printf("Qual o valor da base? ");
    scanf("%f", &base);

    printf("Qual o valor da altura? ");
    scanf("%f", &altura);

    calculate(base, altura);
    return 0;
}

float calculate(float a, float b)
{
    printf("O valor da área é: %f\n", (a * b) / 2.0);
}