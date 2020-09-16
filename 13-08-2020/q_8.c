#include<stdio.h>
#include<math.h>
int isPrime(int n){
    int prime = 1;
    if(n==1){
        prime = 0;
        return prime;
    }
    for(int i = 2;i<n;i++){
        n % i ==0 ? prime = 0 : 0;
    }
    return prime;
}

int main(void){
    int num;
    scanf("%d",&num);
    isPrime(num)==1?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");
    return 0;
}