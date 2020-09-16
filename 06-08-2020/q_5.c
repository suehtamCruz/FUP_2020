#include<stdio.h>
#include<math.h>
int main(void){
    int base,exp;
    scanf("%d%d",&base,&exp);
    int res = pow(base,exp);
    printf("\n%d",res);
    return 0;
}