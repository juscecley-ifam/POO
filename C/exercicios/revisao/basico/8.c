#include <stdio.h>
#include <math.h>

void main()
{
    printf("*** SALARIOS *** \n");

    float salario, menorSalario, maiorSalario, somaSalarios, mediaSalarios;
    int qtdSalarios;

    qtdSalarios = 0;
    somaSalarios = 0;
    menorSalario = 1000000000;
    maiorSalario = -1;

    do
    {
        printf("\n Informe um salario: ");
        scanf("%f", &salario);

        if (salario > 0)
        {
            qtdSalarios++;

            if (salario > maiorSalario)
            {
                maiorSalario = salario;
            }

            if (salario < menorSalario)
            {
                menorSalario = salario;
            }

            somaSalarios += salario;
        }

    } while (salario > -1);

    printf("\n O maior salario e : %.2f", maiorSalario);
    printf("\n O menor salario e : %.2f", menorSalario);
    printf("\n O media de salario e : %.2f", somaSalarios / qtdSalarios);
}