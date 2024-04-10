#include <stdio.h>

int main()
{
    printf("*** PAR OU IMPAR *** \n");

    int n1;

    printf("\n Informe um Numero: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0)
    {
        printf("\nO numero %d e par", n1);
    }
    else
    {
        printf("\nO numero %d e impar", n1);
    }

    return 0;
}
