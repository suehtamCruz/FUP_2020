#include<stdio.h>

struct vetor_q2 {
    int vet[10];
    int tam;
};

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

int main(void){
    
    struct vetor_q2 vetor_inteiros;
    vetor_inteiros.tam = 10;

    for(int i=0;i<vetor_inteiros.tam;i++){
        scanf("%d",&vetor_inteiros.vet[i]);
    }
    int maiorValor = maior_no_vetor(vetor_inteiros,vetor_inteiros.tam);
    printf("%d\n",maiorValor);
    return 0;
}