#include<stdio.h>

struct numeros_inteiros{
    int num1;
    int num2;
};


int main(void){
    struct numeros_inteiros numeros;

    
    scanf("%d%d",&numeros.num1,&numeros.num2);
    int soma = numeros.num1 + numeros.num2;
    printf("%d\n",soma);
    return 0;
}