#include<stdio.h>
int fibonacci( int n){
    int cont =0;
    int soma = 0;
    int ns[50];
    ns[0]=1;
    ns[1]=1;
    for (int i = 2; i <n; i++){
        ns[i] = ns[i-1] + ns[i-2];
        if(ns[i]%2==0){
            soma+=i;
            
        }
    }  
    return soma;
}
int main(void){
    int num = 0;
    scanf("%d",&num);
    int somaPares = fibonacci(num);

    printf("%d\n",somaPares);
    return 0;
}