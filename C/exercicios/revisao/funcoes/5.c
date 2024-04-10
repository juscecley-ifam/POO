#include <stdio.h>
#include <stdlib.h>

void soma(float num1, float num2)
{
    printf("%.2f + %.2f = %.2f \n", num1, num2, num1 + num2);
}

void subtracao(float num1, float num2)
{
    printf("%.2f - %.2f = %.2f \n", num1, num2, num1 - num2);
}

void multiplicao(float num1, float num2)
{
    printf("%.2f * %.2f = %.2f \n", num1, num2, num1 * num2);
}

void divisao(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("Não é possivel dividir por ZERO\n");
    }
    else
    {
        printf("%.2f / %.2f = %.2f \n", num1, num2, num1 / num2);
    }
}

int menu()
{
    int opcao;
    printf("\n******** Calculadora Simples *************\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    printf("0 - SAIR\n");
    printf("\nOPCAO: ");

    scanf("%d", &opcao);

    return opcao;
}

void lerValores(float *n1, float *n2)
{
    printf("\nValor 1: ");
    scanf("%f", n1);
    printf("Valor 2: ");
    scanf("%f", n2);
}

void main()
{
    int opcao;
    float n1, n2;

    do
    {
        opcao = menu();

        switch (opcao)
        {
        case 1:
            lerValores(&n1, &n2);
            soma(n1, n2);
            break;
        case 2:
            lerValores(&n1, &n2);
            subtracao(n1, n2);
            break;
        case 3:
            lerValores(&n1, &n2);
            multiplicao(n1, n2);
            break;
        case 4:
            lerValores(&n1, &n2);
            divisao(n1, n2);
            break;
        case 0:
            printf("\n FIM!!!");
            break;
        default:
            printf("\n Opcao Invalida");
            break;
        }
    } while (opcao != 0);
}