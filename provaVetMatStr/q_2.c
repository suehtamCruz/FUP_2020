#include<stdio.h>

void removeEqual(int v[],int tam){
    
    int unique[tam];

    for(int i=0;i<tam;i++){
        unique[i] = v[i];
    };
    for(int i=0;i<tam;i++){
        for(int j=1;j<tam;j++){
            if(unique[i] == v[j]){
                v[j] = 0;
            }
        }
    }printf("\n");
    for(int i=0;i<tam;i++){
        if(v[i]!=0){
            printf("%d ",v[i]);
        }
    }
}


int main(void){
    
    int tam;
    scanf("%d",&tam);
    int v[tam];

    for(int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    removeEqual(v,tam);
    return 0;
}