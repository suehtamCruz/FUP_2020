#include<stdio.h>

int main(void){

    ////////////////////////////////////////////////////////questao 1////////////////////////////////////////////////////
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
   
   
    ///////////////////////////////////////////////////questao 2////////////////////////////////////////////////////////////////

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

    /////////////////////////////////////////////////////questao 3 //////////////////////////////////////////////////

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

int somaPrime=0;
int somaNotPrime=0;

int allPrimes( int n){
    somaPrime = 0;
    somaNotPrime = 0;


    printf("{");
    for(int i=0;i<=n;i++){

        if(isPrime(i) && ( sqrt(i)!=ceil(sqrt(i)) ) ){
            printf(" %d ",i);
            somaPrime+=i;
        }else{
            somaNotPrime+=i;
        }
    }
    printf("}"); 
}

int main(void){
    int num;
    scanf("%d",&num);
    allPrimes(num);
    int result = somaNotPrime - somaPrime;

    printf("\n%d\n",result);

    return 0;
}

    ////////////////////////////////////////////////////////questao 4 //////////////////////////////////////////////////////

    #include<stdio.h>
int impares(){
    int cont=0;
    for(int i=0;i<=500;i++){
        if( i % 2 != 0 && i % 3 == 0 ){
            cont++;
        }
    }
    return cont;
}
int main(void){
    printf("\n%d numeros",impares());
    return 0;
}


///////////////////////////////////////////////////////////questao 5 ///////////////////////////////////////////////////////////////////

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
}   