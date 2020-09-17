#include<stdio.h>

int SomaAteN(int n){
    int soma = 0;
    if(n>0){
        soma = n + SomaAteN(n-1);
    }
    return soma;
}


int main(void){
    int num;
    scanf("%d",&num);
    int soma;
    soma = SomaAteN(num);
    printf("\n%d\n",soma);
    return 0;
}