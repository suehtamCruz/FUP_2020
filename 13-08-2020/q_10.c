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

int somaPrimes = 0;
void somaPrime(int n){

    somaPrimes = 0;
   
    for(int i=0;i<=n;i++){
        if(isPrime(i)==1){
            somaPrimes+=i;
        }
    }
}
int main(void){
    int num;
    scanf("%d",&num);
    somaPrime(num);
    printf("\n%d\n",somaPrimes);
    return 0;
}