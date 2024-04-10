#include <stdio.h>
#include <math.h>

float celsiusParaFahrenheit(float temp)
{
    return (temp * 1.8) + 32;
}

void main()
{
    printf("*** Celsius para Fahrenheit *** \n");
    float tempCelsius, tempFahrenheit;

    printf("\n Informe a temperatura em Celsius: ");
    scanf("%f", &tempCelsius);

    tempFahrenheit = celsiusParaFahrenheit(tempCelsius);

    printf("\n A temperatura em Fahrenheit é: %.2f", tempFahrenheit);
}