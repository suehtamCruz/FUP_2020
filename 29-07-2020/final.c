#include <stdio.h>
int main()
{
    //questao 1
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("\n%d", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("\n%d", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("\n%d", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("\n%d", d);
    }

    //questao 2
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a == b || a == c)
    {
        printf("\nEH IGUAL A (B OU C)\n");
        return 0;
    }
    if ((a > b && a < c) || (a > c && a < b))
    {
        printf("\nVERDADEIRO\n");
    }
    else
    {
        printf("\nFALSO\n");
    }
    //questao 3
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0)
    {
        printf("\n0\n");
        return 0;
    }
    if (b == 0)
    {
        printf("\nNao possivel divir por 0\n");
        return 0;
    }
    else
    {
        printf("%d", (a % b));
    }

    //questao 4
    int n;
    scanf("%d", &n);
    (n != 0 && n % 2 == 0) ? printf("\nPAR\n") : printf("\nIMPAR\n");
    return 0;

    //questao 5
    int num;
    scanf("%d", &num);
    (num != 0 && num % 3 == 0) ? printf("\nVERDADEIRO\n") : printf("\nFALSO\n");

    //questao 6
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    if (num1 == 0 || num2 == 0)
    {
        printf("\nNUM DA PRA BRINCAR USANDO 0, VAI DE NOVO.\n");
    }
    else
    {
        num1 % num2 == 0 ? printf("\nTRUE\n") : printf("\nFALSE\n");
    }
    return 0;
}