#include<stdio.h>

int eleva(int b,int e){
    int res=1;
    if(e > 0){
        res = b * eleva(b,e-1);
        
    }
    return res;
}

int main(void){
    int base,exp;
    scanf("%d%d",&base,&exp);
    int ele = eleva(base,exp);
    printf("\n%d\n",ele);
    return 0;
}