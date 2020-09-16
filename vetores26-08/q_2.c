#include<stdio.h>
int somaVet(int v[],int tam){
    int soma=0;
    for(int i=0;i<tam;i++){
        soma+=v[i];
    }
    return soma;
}
int main(void){
    int tam;
    scanf("%d",&tam);
    int vet[tam];
    for(int i=0;i<tam;i++){
        scanf("%d",&vet[i]);       
    }
    int somaVetor = somaVet(vet,tam);
    
    printf("\n%d",somaVetor);
    
    return 0;
}   