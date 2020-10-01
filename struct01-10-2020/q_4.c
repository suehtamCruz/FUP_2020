#include<stdio.h>


struct numeros_calc{
    float num1;
    float num2;
    char op;
};

void calculadora(struct numeros_calc num, char op){
    switch (op){
    case '+':
        printf("%0.2f\n", num.num1 + num.num2);

        break;
    case '-':
        printf("%0.2f",num.num1 - num.num2);
        break;
    case '*':
        printf("%0.2f",num.num1 * num.num2);
        break;

    case '/':
        if(num.num1 == 0){
            printf("0\n");
            break;
        }
        else if(num.num2 == 0){
            printf("nao divisivel por 0\n");
            break;
        }
        else{
            printf("%0.2f", num.num1 / num.num2);
        }
        break;    
    default:
        printf("digite um operador valido....\n");
        break;
    }
}

int main(void){
    
    struct numeros_calc numeros;
    scanf("%f%f ",&numeros.num1,&numeros.num2);
    scanf("%c",&numeros.op);
    
    calculadora(numeros,numeros.op);

    return 0;
}