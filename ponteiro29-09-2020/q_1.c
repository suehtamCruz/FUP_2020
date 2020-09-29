#include<stdio.h>

int numero_incrementado(int *p,int num){
    int num_incre = num + *p;
    
    return num_incre;
}

int main(void){
    int numero, n;
    scanf("%d%d",&numero,&n);
    int *pN = &n;
    int numInc = numero_incrementado(pN,numero);
    printf("%d\n",numInc);
    return 0;
}