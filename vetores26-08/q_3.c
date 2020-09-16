#include<stdio.h>
int flagInVet(int vetor[] , int tam,int ele){
    int flag = 0;
    for(int i=0;i<tam;i++){
        if(ele==vetor[i]){
            flag = 1;
        }
    }
    return flag;
}
int main(void){
    
    int tam;
    printf("tamanho\n");
    scanf("%d",&tam);

    int v[tam];
    printf("elementos no vetor\n");
    for(int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    
    int ele;
    printf("elemento\n");
    scanf("%d",&ele);

    int verify = flagInVet(v,tam,ele);
    verify == 1 ? printf("\nVERDADEIRO") : printf("\nFALSO");
    
    return 0;
}