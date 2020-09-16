#include<stdio.h>
int maior(int a, int b){
    int maior = 0;
    int vet[2] = {a ,b};
    for(int i=0;i<2;i++){
        if(i==0){
            maior =vet[i];
        }
        if(vet[i]>maior){
            maior = vet[i];
        }
    }
    return maior;
}
int main(void){
    int n1,n2;
    int maiorNum = maior(n1,n2);
    int mdc = 0;
    scanf("%d%d",&n1,&n2);
    
    for(int i = 1; i<=maiorNum;i++){
        if((n1%i ==0 && n2%i==0) &&( i>mdc)){
            mdc=i;
        }
    }

    printf("\n%d",mdc);
    return 0;
}