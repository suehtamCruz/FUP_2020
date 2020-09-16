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