#include<stdio.h>

int isMulti(int a , int b){
    int mult = 0;
    b % a == 0 ? mult = 1 : 0;
    return mult;
}

int main(void){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    isMulti(n1,n2)==1?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");
    return 0;
}