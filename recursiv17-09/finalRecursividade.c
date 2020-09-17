#include<stdio.h>




int fatorial(int n){
    int fat;

    if(n==0){
        fat = 1;
    }else{
        fat = n * fatorial(n-1);
    }

    return fat;
}


int SomaAteN(int n){
    int soma = 0;
    if(n>0){
        soma = n + SomaAteN(n-1);
    }
    return soma;
}


int eleva(int b,int e){
    int res=1;
    if(e > 0){
        res = b * eleva(b,e-1);
        
    }
    return res;
}


double somaDecimal(int n){
    double soma =1;
    
    
    if(n>0){
        soma += (1 / somaDecimal(n-1));
       
    }
    return soma;
}






int main(void){



////////////////////////questao 1////////////////////////
    // int num;
    // scanf("%d",&num);
    // int fat = fatorial(num);
    // printf("%d\n",fat);
////////////////////////////////////////////////////////




////////////////////////questao 2////////////////////////
    // int num;
    // scanf("%d",&num);
    // int soma;
    // soma = SomaAteN(num);
    // printf("\n%d\n",soma);
////////////////////////////////////////////////////////




////////////////////////questao 3////////////////////////
    // int base,exp;
    // scanf("%d%d",&base,&exp);
    // int ele = eleva(base,exp);
    // printf("\n%d\n",ele);
////////////////////////////////////////////////////////





////////////////////////questao 4////////////////////////
    //  int n;
    // scanf("%d",&n);
    // double sum = somaDecimal(n);
    // printf("%0.4lf",sum);
////////////////////////////////////////////////////////



    return 0;
}