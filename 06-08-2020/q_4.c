#include<stdio.h>

int main(void){

    int num;
    float harmonico;
    scanf("%d",&num);

    for(float i=1;i<=num;i++){
        harmonico += (1/i);
    };
    printf("%0.4f",harmonico);
    return 0;
}