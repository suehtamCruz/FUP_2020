//questao 1
#include <stdio.h>
int main(void)
{
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
}