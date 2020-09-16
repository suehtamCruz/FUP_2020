//questao 6
#include<stdio.h>
int main(void){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if(num1 ==0 || num2 == 0 ){
        printf("\nNUM DA PRA BRINCAR USANDO 0, VAI DE NOVO.\n");
        
    }else{
        num1%num2==0?printf("\nTRUE\n"):printf("\nFALSE\n");
    }
    return 0;
}