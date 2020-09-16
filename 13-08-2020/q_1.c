#include<stdio.h>
int maior(int a,int b,int c,int d){
    int num[4] ={a,b,c,d} , maior;

    for(int i=0;i<4;i++){
        i==0 ? maior = num[i] : 0;
        if(num[i]>maior){
            maior=num[i];
        };
    };
    return maior;
};
int main(void){
    int n1,n2,n3,n4;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    printf("\n%d\n",maior(n1 , n2 , n3 , n4));
    return 0;
}