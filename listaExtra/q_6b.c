#include<stdio.h>
float areaCaixa(float c , float a, float b){
    float res = ((2*c*a) + (2*b*c) + (2*a*b));
    return res;
}
float areaTampa(float larg, float comp){
    float res = larg*comp;
    return res;
}

int main(void){

    float alt,comp,larg;
    scanf("%f%f%f",&alt,&comp,&larg);
    float areaTotal = areaCaixa(alt,comp,larg) + areaTampa(larg,comp);
    printf("\n%0.2f",areaTotal);
    return 0;
}