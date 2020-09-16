#include<stdio.h>

int main(){
    
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
     
     //questao 3
    int n;
    scanf("%d", &n);
    (n % 3 == 1 && n % 5 == 0) ? printf("1") : printf("0");
   
    //questao 4
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    (n1>50&&n1<200)?printf("true\n"):printf("false\n");
    (n2>-1&&n2<50)?printf("true"):printf("false");

    //questao 5
    int n1, n2, restoMult;
    scanf("%d%d", &n1, &n2);
    restoMult = (n1 % n2) * n1;
    (restoMult % 2 == 0) ? printf("\n%d\n", (restoMult / 2)) : printf("%d", restoMult);


    return 0;
}