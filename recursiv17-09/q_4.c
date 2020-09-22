#include<stdio.h>

double somaDecimal(int n){
    double soma =1;
    
    
    if(n>0){
        soma += (1 / somaDecimal(n-1));
       
    }
    return soma;
}
int main(void){
    int n;
    scanf("%d",&n);
    double sum = somaDecimal(n);
    printf("%0.4lf",sum);
    return 0;
}