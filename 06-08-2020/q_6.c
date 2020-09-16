#include<stdio.h>
#include<math.h>
int main(void){
    float num=0;
    scanf("%f",&num);
    float isQuad = pow(num,0.5);
   
    ceil(isQuad)==isQuad && floor(isQuad)==isQuad ?printf("\neh quadrado"):printf("nao eh quadrado");

    return 0;
}