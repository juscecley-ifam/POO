#include <stdio.h>
#include <math.h>

void main()
{
    printf("*** ORDEM CRESCENTE *** \n");

    int n1, n2, n3, tmp;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n3)
    {
        tmp = n3;
        n3 = n1;
        n1 = tmp;
    }

    if (n1 > n2)
    {
        tmp = n2;
        n2 = n1;
        n1 = tmp;
    }

    if (n2 > n3)
    {
        tmp = n3;
        n3 = n2;
        n2 = tmp;
    }
    printf("%d, %d, %d", n1, n2, n3);
}
