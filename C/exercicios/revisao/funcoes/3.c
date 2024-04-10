#include <stdio.h>
#include <math.h>

float areaCiculo(float raio)
{
    return M_PI * pow(raio,2);
}

void main()
{
    printf("*** Área de um círculo *** \n");
    float raio, area;

    printf("\n Informe o raio do Círculo: ");
    scanf("%f", &raio);

    area = areaCiculo(raio);

    printf("\n A área do círculo é: %.2f", area);
}