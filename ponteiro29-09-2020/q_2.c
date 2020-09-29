#include<stdio.h>

void troca_valores(int *p1,int *p2 ,int aux){
    
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
    printf("%d\t%d",*p1,*p2);
}

int main(void){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int *pNum1 = &num1;
    int *pNum2 = &num2;

    int auxTroca;
    troca_valores(pNum1,pNum2,auxTroca);
    return 0;
}