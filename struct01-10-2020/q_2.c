#include<stdio.h>

struct numeros_inteiros{
    int num1;
    int num2;
};

void maior_numero(struct numeros_inteiros numeros){
    if(numeros.num1 == numeros.num2){
        printf("iguais\n");
    }
    
    if(numeros.num1 > numeros.num2){
        printf("%d\n",numeros.num1);
    }
    
    if(numeros.num2 > numeros.num1){
        printf("%d\n",numeros.num2);
    }

}

int main(void){
    struct numeros_inteiros numeros;

    scanf("%d%d",&numeros.num1,&numeros.num2);
    maior_numero(numeros);
    return 0;
}