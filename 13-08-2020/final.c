#include<stdio.h>
int maior(int a,int b,int c,int d){
    int num[4] ={a,b,c,d} , maior;

    for(int i=0;i<4;i++){
        i==0 ? maior = num[i] : 0;
        if(num[i]>maior){
            maior=num[i];
        };
    };
    return maior;
};

int between(int a,int b,int c){
    int entre = 0;
    ( (a>b && a<c )|| (a<b && a>c ) ) ? entre = 1 : 0;
    return entre;
}

int divisorResto(int n1,int n2){
    int resto;
    if( n1 < 0 || n2 < 0 ){
        printf("\nAPENAS NUMEROS NATURAIS.\n");
        return 0;
    }
    if( n1 > 0 && n2 > 0 ){
        if(n1>n2){
            resto = n1 % n2;
            printf("\nd\n",resto);
            return 0;
        }else{
            printf("\nNAO POSSIVEL DIVIDIR\n");
            return 0;
        }
    }
    else{
        n1==0?printf("0"):0;
        n2==0?printf("\nNAO POSSIVEL DIVIDIR POR 0\n"):0;
        return 0;
    }

}

int isEven(int n){
    int par = 0;
    n % 2==0 ? par = 1 : 0;
    return par;
}

int multTres(int n){
    int mult = 0;
    n % 3==0 ? mult = 1 : 0;
    return mult;
}

int isMulti(int a , int b){
    int mult = 0;
    b % a == 0 ? mult = 1 : 0;
    return mult;
}


int somaCondicional(){
    int soma = 0;

    for(int i=0;i<=200;i++){
        (i%3==0 && i%7!=0) ? soma+=i : 0;
    }

    return soma;
}

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
int somaNotPrimes = 0;

void soma(int n){

    somaPrimes = 0;
    somaNotPrimes = 0;

    for(int i=0;i<=n;i++){
        if(isPrime(i)==1){
            somaPrimes+=i;
        }else{
            somaNotPrimes+=i;
        }
    }
}


void somaPrime(int n){

    somaPrimes = 0;
   
    for(int i=0;i<=n;i++){
        if(isPrime(i)==1){
            somaPrimes+=i;
        }
    }
}




int main(void){

    //  questao 1
    // int n1,n2,n3,n4;
    // scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    // printf("\n%d\n",maior(n1 , n2 , n3 , n4));

    // questao 2
    //  int comp,num1,num2;
    // scanf("%d%d%d",&comp,&num1,&num2);
    // between(comp,num1,num2)==1?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");

    // //questao 3
    //  int n1,n2;
    // scanf("%d%d",&n1,&n2);
    // divisorResto(n1,n2);

    //questao 4
    //  int num;
    // scanf("%d",&num);
    // isEven(num)==1 ?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");

    //questao 5
    //  int num;
    // scanf("%d",&num);
    // multTres(num)==1 ?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");
    
    // //questao 6
    //  int n1,n2;
    // scanf("%d%d",&n1,&n2);
    // isMulti(n1,n2)==1?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");

    //questao 7
    //    printf("%d",somaCondicional());
   
    //questao 8
    //  int num;
    // scanf("%d",&num);
    // isPrime(num)==1?printf("\nVERDADEIRO\n"):printf("\nFALSO\n");


    //questao 9
    //   int num;
    // scanf("%d",&num);
    // soma(num);

    // int res = somaNotPrimes - somaPrimes;
    // printf("\n%d\n",res);
    
    
    
    //questao 10
    // int num;
    // scanf("%d",&num);
    // somaPrime(num);
    // printf("\n%d\n",somaPrimes);


    return 0;
}