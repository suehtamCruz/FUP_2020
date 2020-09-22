#include<stdio.h>

//1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21.
//1  2  3  4  5  6  7  8  9  10  11  12

int enesimo_sequencia(int n){
    
    if(n==1 || n==2){
        return 1;
    }else if(n==3){
        return 2;
    }else{
        return enesimo_sequencia(n-2) + enesimo_sequencia(n-3);
    }

}
int main(void){
    int n;
    scanf("%d",&n);
    int valor = enesimo_sequencia(n);
    printf("\n%d\n",valor);
    return 0;
}