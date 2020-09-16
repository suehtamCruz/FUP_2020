#include<stdio.h>

int main(void){

    int seg=0,bac=1;
    scanf("%d",&seg);
    for(int i=0;i<seg;i++){
        bac*=2;
    };

    printf("\n%d\n",bac);
    return 0;
}