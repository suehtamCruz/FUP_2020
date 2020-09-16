#include<stdio.h>

void copy(int v[],int tam,int vetCop[]){
    for(int i=0;i<tam;i++){
        vetCop[i]=v[i];
    }
}

int main(void){
    int tam;
    
    scanf("%d",&tam);

    int vet[tam];
    int vetCopia[tam];

    for(int i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }
    
    copy(vet,tam,vetCopia);
    printf("copy\n");
    for(int i=0;i<tam;i++){
        printf("%d ",vetCopia[i]);
    }
    return 0;
}
