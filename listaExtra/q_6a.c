#include<stdio.h>
float vol (float a , float  l , float c ){
    float res = a*c*l;

    return res;
}

int main(void){
    float larg,alt,comp;
    scanf("%f%f%f",&larg,&alt,&comp);

    float volume = vol(larg,comp,alt);
    printf("\n%0.2f",volume);
    return 0;
}