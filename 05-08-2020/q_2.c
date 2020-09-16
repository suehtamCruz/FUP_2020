#include<stdio.h>

int main(void){

    int det, soma=0;
    
    scanf("%d",&det);
    
    for(int i = 0;i<=det;i++){
        soma+=i;
    };

    printf("\n%d\n",soma);
    return 0;
}