

#include <stdio.h>

int main (){
    //questao 2
    float salAtual;
    scanf("%f",&salAtual);
    if(salAtual<=1000){
        salAtual+=((salAtual*20)/100);
    }
    if(salAtual>1000 && salAtual<=1500){
        salAtual+=((salAtual*15)/100);
    }
    if(salAtual>1500 && salAtual <=2000){
        salAtual+=((salAtual*10)/100);
    }
    if(salAtual>2000){
        salAtual+=((salAtual*5)/100);
    }
    printf("%0.2f",salAtual);
}