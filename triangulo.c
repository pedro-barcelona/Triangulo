#include <stdio.h>

int main(void)
{
    int i;
    int triangulo[2];

    for (i = 0; i < 2; i++)
    {
        printf("Valor %i: ", i + 1);
        scanf("%i", &triangulo[i]);
    }
    printf("O valor da área do triângulo é: %.2f", (triangulo[0] * triangulo[1]) / 2.0);
    return 0;
}