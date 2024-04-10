#include <stdio.h>
#include <math.h>

float areaCiculo(float raio)
{
    return M_PI * pow(raio, 2);
}

float perimetroCiculo(float raio)
{
    return 2 * M_PI * raio;
}

float areaRetangulo(float base, float altura)
{
    return base * altura;
}

float perimetroRetangulo(float base, float altura)

{
    return 2 * (base + altura);
}

float areaTriangulo(float base, float altura)
{
    return (base * altura) / 2;
}

float perimetroTriangulo(float ladoA, float ladoB, float ladoC)

{
    return ladoA + ladoB + ladoC;
}

void main()
{
    printf("*** Área e Perimetro de figuras geometricas *** \n");
    float raio, base, altura, ladoA, ladoB, ladoC;
    int tipo;

    printf("\n Informe o tipo de figura: ");
    printf("\n 1 - Circulo");
    printf("\n 2 - Retangulo");
    printf("\n 3 - Triangulo");
    printf("\n Tipo: ");
    scanf("%d", &tipo);

    switch (tipo)
    {
    case 1:
        printf("\n Informe o raio do circulo: ");
        scanf("%f", &raio);
        printf("\n A área do círculo é: %.2f", areaCiculo(raio));
        printf("\n O perimetro do círculo é: %.2f", perimetroCiculo(raio));
        break;

    case 2:
        printf("\n Informe a base do retangulo: ");
        scanf("%f", &base);
        printf("\n Informe a altura do retangulo: ");
        scanf("%f", &altura);
        printf("\n A área do retangulo é: %.2f", areaRetangulo(base, altura));
        printf("\n O perimetro do retangulo é: %.2f", perimetroRetangulo(base, altura));
        break;
    case 3:
        printf("\n Informe a base do triangulo: ");
        scanf("%f", &base);
        printf("\n Informe a altura do triangulo: ");
        scanf("%f", &altura);
        printf("\n Informe o lado A do triangulo: ");
        scanf("%f", &ladoA);
        printf("\n Informe o lado B do triangulo: ");
        scanf("%f", &ladoB);
        printf("\n Informe o lado C do triangulo: ");
        scanf("%f", &ladoC);
        printf("\n A área do triangulo é: %.2f", areaTriangulo(base, altura));
        printf("\n O perimetro do triangulo é: %.2f", perimetroTriangulo(ladoA, ladoB, ladoC));
        break;

    default:
        printf("\n Figura invalida!");
        break;
    }
}