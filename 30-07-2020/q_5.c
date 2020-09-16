#include <stdio.h>

int main()
{
    //questao 5
    int n1, n2, restoMult;
    scanf("%d%d", &n1, &n2);
    restoMult = (n1 % n2) * n1;
    (restoMult % 2 == 0) ? printf("\n%d\n", (restoMult / 2)) : printf("%d", restoMult);
}