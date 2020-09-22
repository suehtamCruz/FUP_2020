#include<stdio.h>

void copia_vetor(int origem[], int copia[],int tam){
    if(tam>0){
        copia[tam-1] = origem[tam-1];
        copia_vetor(origem,copia,tam-1);
    }else if(tam==0){
        copia[0] = origem[0];
    }
}

int main(void){
    int tam;
    scanf("%d",&tam);
    int v1[tam],v2[tam];
    
    for(int i=0;i<tam;i++){
        scanf("%d", &v1[i]);
    }
    printf("\n"); 

    copia_vetor(v1,v2,tam);
    
    for(int i=0;i<tam;i++){
        printf("%d ",v2[i]);
    }

    return 0;
}

