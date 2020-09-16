#include<stdio.h>

int pot(float base , float expo){
    
    float response=1;
    for(int i=0;i<expo;i++){
        response*=base;
    }
    return response;
}

int main(void){
    float res=pot(9,0.5);
    printf("%f",res);
   return 0;
}