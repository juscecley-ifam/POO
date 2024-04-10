#include <stdio.h>
#include <math.h>

void main()
{
    printf("*** MAIOR E MENOR IDADE *** \n");
    
    int maior, menor, n;

    maior = -1;
    menor = 1000000;

    for (int i = 1; i <= 10; i++)
    {
        printf("\n Informe a idade %d: ", i);
        scanf("%d", &n);

        if (n > maior)
        {
            maior = n;
        } 
        
        if (n < menor)
        {
            menor = n;
        }
    }

    printf("\n A maior idade e : %d", maior);
    printf("\n A menor idade e : %d", menor);
}