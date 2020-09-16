#include<stdio.h>
#include<math.h>
int isPrime(int n){

    int prime = 0;

    if(n%1==0 && n%n==0) {
        if(n==2 ||n==3 ||n==5){
            prime=1;
            return prime;
        }else{
            if( n % 2 == 0 || n % 3 == 0 || n % 5 == 0 ){
                prime=0;
                return prime;
            }else{
                prime = 1;
                return prime;
            }
         }
    }
}

int contPrimes( int n){
    int cont =0;
    for(int i=0;i<=n;i++){

        if(isPrime(i) && ( sqrt(i)!=ceil(sqrt(i)) ) ){
            cont++;
        }
    }
    return cont;
}

int main(void){
    int num;
    scanf("%d",&num);

   printf("\n%d numeros " ,contPrimes(num));

    return 0;
}