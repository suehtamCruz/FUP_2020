#include<stdio.h>

int main(void){
    float far;
    scanf("%f",&far);
    float cel = (far - 32) / 1.8;
    printf("%0.2f",cel);
    return 0;
}
// (°F - 32) / 1,8.