#include<stdio.h>
int multTres(int n){
    int mult = 0;
    n % 3==0 ? mult = 1 : 0;
    return mult;
}
int main(void){
    int num;
    scanf("%d",&num);
    multTres(num)==1 ?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");
    return 0;
}