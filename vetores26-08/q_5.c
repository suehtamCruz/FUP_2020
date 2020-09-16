#include<stdio.h>
void trocaVetor(int v1[],int v2[],int tam){
    int aux;
    for(int i=0;i<tam;i++){
        aux = v1[i];
        v1[i] = v2[i];
        v2[i] = aux;
    }
}

int main(void){
    int tam;
    scanf("%d",&tam);
    int v1[tam],v2[tam];
    
    printf("vet 1\n");
    for(int i =0;i<tam;i++){
        scanf("%d",&v1[i]);
    }
    printf("vet 2\n");
    for(int i =0;i<tam;i++){
        scanf("%d",&v2[i]);
    }

    trocaVetor(v1,v2,tam);

    printf("\ninvertido"); 

    for(int i =0;i<tam;i++){
        printf("%d",v1[i]);
    }

    printf("\n");

    for(int i =0;i<tam;i++){
        printf("%d",v2[i]);
    }
    return 0;
}