#include<stdio.h>

struct resultados{
    float soma;
    float sub;
    float divi;
    float multi;
};

void operacoes(float n1, float n2){
    struct resultados res_operacoes;

    res_operacoes.soma = n1 + n2;
    res_operacoes.sub = n1 - n2;
    res_operacoes.divi = n1 / n2;
    res_operacoes.multi = n1 * n2;

    printf("soma : %0.2f\n",res_operacoes.soma);
    printf("sub.: %0.2f\n",res_operacoes.sub);
    printf("divi.: %0.3f\n",res_operacoes.divi);
    printf("mult.: %0.2f\n",res_operacoes.multi);

}


int main(void){
    
    float num1,num2;
    scanf("%f%f",&num1,&num2);
    operacoes(num1,num2);

    return 0;
}