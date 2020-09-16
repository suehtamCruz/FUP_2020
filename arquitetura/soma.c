#include<stdio.h>
int soma(int a,int b,int c){
    int res = a+b+c;
    return res;
}
int main(void){
    int n1 = 1 , n2 = 2 , n3 = 3; 
    int res;
    soma(n1,n2,n3) > 0 ? res = 0:0;
    soma(n1,n2,n3) <= 0 ?res = 1:0;
    return res;
}   