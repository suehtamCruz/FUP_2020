#include<stdio.h>
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
int main(void){
    int num;
    scanf("%d",&num);
    
    isPrime(num) == 1 ?printf("\n primo \n") :isPrime(num)==0 ?printf("\nnao primo\n"):0;
    return 0;
}