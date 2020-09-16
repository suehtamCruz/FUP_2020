#include<stdio.h>
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
int main(void){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    divisorResto(n1,n2);
    return 0;
}