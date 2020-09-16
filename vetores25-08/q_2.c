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
int main(void){
    int length;
    scanf("%d",&length);
    int v[length];
    for(int i=0;i<length;i++){
        scanf("%d",&v[i]);
    }
    int maior = maiorInVet(v,length);
    printf("\n%d", maior);
    return 0;
}