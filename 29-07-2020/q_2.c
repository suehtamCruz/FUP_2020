//questao 2
#include <stdio.h>

int main(void)
{

    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(a==b ||a==c){
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
}