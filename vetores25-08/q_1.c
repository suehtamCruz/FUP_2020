#include<stdio.h>
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
    int v[length];
    for(int i=0;i<length;i++){
        scanf("%d",&v[i]);
    }
    int menor = menorInVet(v,length);
    printf("\n%d", menor);
    return 0;
}