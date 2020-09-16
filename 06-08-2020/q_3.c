#include<stdio.h>

int main(void) {
    int qtd=0;
    for (int i=0;i<=1000;i++) {
        i%2==0 && i%5==0 && i%6!=0 ?qtd++ : 0;
    };
    printf("\n%d numeros", qtd);
    return 0;
}