//questao 3
#include<stdio.h>

int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0){
        printf("\n0\n");
        return 0;
    }
    if(b==0){
        printf("\nNao possivel divir por 0\n");
        return 0;
    }
    else{
        printf("%d",(a%b));
    }   
}