#include<stdio.h>

int main(void){
    float n1,n2,n3;
    int p1,p2,p3;
    scanf("%f%d %f%d %f%d",&n1,&p1,&n2,&p2,&n3,&p3);
    n1*=(float)p1;
    n2*=(float)p2;
    n3*=(float)p3;
    float pondMedia = (n1+n2+n3)/(p1+p2+p3);
    printf("\n%0.2f",pondMedia);
    return 0;
}