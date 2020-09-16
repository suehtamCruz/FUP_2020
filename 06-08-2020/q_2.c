#include<stdio.h>

int main(void) {
    int num=0;
    scanf("%d", &num);
    if (num%num==0 && num%1==0) {
       if(num == 1 || num == 2 || num == 3 || num == 5){
           printf("\n'Primo");
       }else{
            (num%2!=0 && num%3!=0 && num%5!=0)?printf("\nPrimo"):printf("\nNao primo");
       }
    }
    return 0;
}