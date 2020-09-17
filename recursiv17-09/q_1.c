#include<stdio.h>

int fatorial(int n){
    int fat;

    if(n==0){
        fat = 1;
    }else{
        fat = n * fatorial(n-1);
    }

    return fat;
}

int main(void){
    int num;
    scanf("%d",&num);
    int fat = fatorial(num);
    printf("%d\n",fat);

    return 0;
}