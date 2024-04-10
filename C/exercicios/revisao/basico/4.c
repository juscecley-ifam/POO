#include <stdio.h>

int main()
{
    printf("*** ANO BISSEXTO *** \n");

    int ano;

    printf("\n Informe um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0)
    {
        if (ano % 100 == 0 && ano % 400 == 0)
        {
            printf("\nO ano %d e bissexto", ano);
        }
        else
        {
            printf("\nO ano %d nao e bissexto", ano);
        }
    }
    else
    {
        printf("\nO ano %d nao e bissexto", ano);
    }

    return 0;
}
