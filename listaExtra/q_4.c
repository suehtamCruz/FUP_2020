#include<stdio.h>

int main(void){
    float peso,altura;
    scanf("%f%f",&peso,&altura);
    float imc = peso/(altura*altura);
    printf("%0.2f",imc);
    return 0;
}