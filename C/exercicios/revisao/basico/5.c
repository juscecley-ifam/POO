#include <stdio.h>
#include <math.h>

void main()
{
    printf("*** MULTIPLOS DE TRES *** \n");
    
    int count;

    count = 0;

    for (int i = 0; i <= 1000; i++)
    {
        if (i % 3 == 0)
        {
            count++;
        }
    }

    printf("\n A quantidade de múltiplos de 3 e : %d", count);
}