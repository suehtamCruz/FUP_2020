#include<stdio.h>

int main(void) {

    int num=0, fator=1;
    scanf("%d", &num);
    for (int i=0;i<=num;i++) {

        i==0 ? fator*=1 : i!=0 ? fator*=i : 0;
    
    }
    printf("\n%d", fator);
    return 0;
}