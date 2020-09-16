#include<stdio.h>
int isEven(int n){
    int par = 0;
    n % 2==0 ? par = 1 : 0;
    return par;
}
int main(void){
    int num;
    scanf("%d",&num);
    isEven(num)==1 ?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");
    return 0;
}