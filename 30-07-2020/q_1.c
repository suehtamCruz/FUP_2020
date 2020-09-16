

#include<stdio.h>

int main(void){
    //questao 1
    float n1,n2;
    char op;
    scanf("%f%f%s",&n1,&n2,&op);
    switch (op)
    {
    case '+':
        printf("%0.2f",(n1+n2));
        break;
    case '-':
        printf("%0.2f",(n1-n2));
        break;
    case '*':
        printf("%0.2f",(n1*n2));
        break;
    case '/':
        printf("%0.2f",(n1/n2));
        break;
    default:
        break;
    }
}