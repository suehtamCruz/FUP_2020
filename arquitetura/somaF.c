#include<stdio.h>
float soma(float a,float b,float c){
    float res = a+b+c;
    return res;
}
float main(void){
    float n1 = 1 , n2 = 2 , n3 = 3; 
    float res;
    soma(n1,n2,n3) > 0 ? res = 0:0;
    soma(n1,n2,n3) <= 0 ?res = 1:0;
    return res;
}   