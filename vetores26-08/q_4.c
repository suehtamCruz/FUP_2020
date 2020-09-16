#include<stdio.h>

void invertPos(int v[],int pos1,int pos2){
    int aux;
    aux = v[pos1];
    v[pos1] = v[pos2];
    v[pos2] = aux;
}

int main(void){
        
    int tam;
    scanf("%d",&tam);
    int v[tam];

    for(int i = 0 ;i<tam;i++){
        scanf("%d",&v[i]);
    }
    int p1,p2;
    printf("posicao 1 e 2\n");
    scanf("%d%d",&p1,&p2);

    invertPos(v,p1,p2);
    
    printf("invertido\n");
    for(int i=0;i<tam;i++){
        printf("%d ",v[i]);
    }
    return 0;
}