#include<stdio.h>
//////////struct questoes 1,2///////////////
struct numeros_inteiros{
    int num1;
    int num2;
};


/////////////struct questao 3//////////////
struct vetor_q2 {
    int vet[10];
    int tam;
};

////////struct questao 4//////////////////
struct numeros_calc{
    float num1;
    float num2;
    char op;
};

/////////////////////////funcao questao 2 //////////////
void maior_numero(struct numeros_inteiros numeros){
    if(numeros.num1 == numeros.num2){
        printf("iguais\n");
    }
    
    if(numeros.num1 > numeros.num2){
        printf("%d\n",numeros.num1);
    }
    
    if(numeros.num2 > numeros.num1){
        printf("%d\n",numeros.num2);
    }

}
////////////////////////////////////////////////////////


////////////////////funcao questao 3//////////////////////////
    
int maior_no_vetor(struct vetor_q2 vetor, int tam){
    int maior = 0;

    for(int i=0;i<tam;i++){
        if(i==0){
            maior = vetor.vet[i];
        }
        else if(vetor.vet[i] > maior){
            maior = vetor.vet[i];
        }
    }

    return maior;
}

//////////////////////////////////////////////////////////////

/////////////////////////funcao questao 4/////////////////////////////

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
//////////////////////////////////////////////////////////////////////


int main(void){




    //////////////////////////////////////questao 1//////////////////////////////////////
        //struct numeros_inteiros numeros;

        
        // scanf("%d%d",&numeros.num1,&numeros.num2);
        // int soma = numeros.num1 + numeros.num2;
        // printf("%d\n",soma);
    ////////////////////////////////////////////////////////////////////////////////////




    //////////////////////////////////////questao 2//////////////////////////////////////
        // struct numeros_inteiros numeros;

        // scanf("%d%d",&numeros.num1,&numeros.num2);
        // maior_numero(numeros);
    ////////////////////////////////////////////////////////////////////////////////////





    //////////////////////////////////////questao 3//////////////////////////////////////
        // struct vetor_q2 vetor_inteiros;
        // vetor_inteiros.tam = 10;

        // for(int i=0;i<vetor_inteiros.tam;i++){
        //     scanf("%d",&vetor_inteiros.vet[i]);
        // }
        // int maiorValor = maior_no_vetor(vetor_inteiros,vetor_inteiros.tam);
        // printf("%d\n",maiorValor);
    ////////////////////////////////////////////////////////////////////////////////////





    //////////////////////////////////////questao 4//////////////////////////////////////
         
        // struct numeros_calc numeros;
        // scanf("%f%f ",&numeros.num1,&numeros.num2);
        // scanf("%c",&numeros.op);
        
        // calculadora(numeros,numeros.op);
    ////////////////////////////////////////////////////////////////////////////////////
    return 0;
}