#include<stdio.h>
#include<string.h>

int main(void){
    int max,num;
    int cont=0;
    scanf("%d",&num);
    char number[10];
    itoa(num,number,10);
    printf("%s",number[0]);
}