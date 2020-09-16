#include<stdio.h>
int maiorInVet(int vet[],int tam){
    int maior = 0;

    for(int i=0;i<tam;i++){
        if(i==0){
            maior = vet[i];
        }
        if(vet[i]>maior){
            maior = vet[i];
        }
    };
    return maior;
}
int menorInVet(int vet[],int tam){
    int menor = 0;

    for(int i=0;i<tam;i++){
        if(i==0){
            menor = vet[i];
        }
        if(vet[i]<menor){
            menor = vet[i];
        }
    };
    return menor;
}

int main(void){
    int length;
    scanf("%d",&length);
    int vetor[length];
    for(int i = 0;i<length;i++){
        scanf("%d",&vetor[i]);
    }
    int maior = maiorInVet(vetor,length);
    int menor = menorInVet(vetor,length);
    int soma = maior+menor;
    printf("\n%d",soma);
    return 0;
}