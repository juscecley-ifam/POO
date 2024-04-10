#include <stdio.h>
#include <stdbool.h>

bool ePrimo(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return num > 1;
}

void main()
{
    printf("*** Número primo *** \n");
    int numero;

    printf("\n Informe um número: ");
    scanf("%d", &numero);

    printf("\n O número %d %s é primo", numero, ePrimo(numero) ? "" : "não");
}