#include <stdio.h>

int main()
{
    printf("*** MEDIA DE TRES NUMEROS *** \n");

    float n1, n2, n3, r;

    printf("\n Informe N1: ");
    scanf("%f", &n1);

    printf("\n Informe N2: ");
    scanf("%f", &n2);

    printf("\n Informe N2: ");
    scanf("%f", &n3);

    r = (n1 + n2 + n3) / 3;

    printf("\nA média aritmética dos três números é: %.2f", r);

    return 0;
}
