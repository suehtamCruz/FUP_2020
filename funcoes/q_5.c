#include<stdio.h>
int somaAll(int n){
    int soma=0;
    for(int i=0;i<=n;i++){
        soma+=i;
    }
    return soma;
}
int main(void){
    int num=0;
    scanf("%d",&num);
    printf("\nsoma: %d ",somaAll(num));


    return 0;
}