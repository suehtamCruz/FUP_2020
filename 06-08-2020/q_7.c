#include<stdio.h>

int main(void){

    int num,nsimo=1;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        nsimo*=2;
    }   
    printf("\n%d",nsimo-1);
    return 0;
}