#include <stdio.h>

int main()
{
    printf("*** SOMA DOIS NUMEROs *** \n");

    float n1, n2, r;

    printf("\n Informe N1: ");
    scanf("%f", &n1);

    printf("\n Informe N2: ");
    scanf("%f", &n2);

    r = n1 + n2;

    printf("\nA soma dos dois numeros é: %.2f", r);

    return 0;
}
