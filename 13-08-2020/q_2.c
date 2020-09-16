#include<stdio.h>
int between(int a,int b,int c){
    int entre = 0;
    ( (a>b && a<c )|| (a<b && a>c ) ) ? entre = 1 : 0;
    return entre;
}
int main(void){
    int comp,num1,num2;
    scanf("%d%d%d",&comp,&num1,&num2);
    between(comp,num1,num2)==1?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");
    return 0;
}