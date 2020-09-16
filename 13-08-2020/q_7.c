#include<stdio.h>

int somaCondicional(){
    int soma = 0;

    for(int i=0;i<=200;i++){
        (i%3==0 && i%7!=0) ? soma+=i : 0;
    }

    return soma;
}

int main(void){
    printf("%d",somaCondicional());
    return 0;
}