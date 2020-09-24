#include<stdio.h>
#include<math.h>

int vetor_para_inteiro(int v[],int tam){
    int inteiro =0;
    int tamanho = tam;
    for(int i=0;i<tam;i++){
        tamanho--;
        inteiro += (v[i] * pow(10,tamanho));
    }
    if(tam==3){
        return inteiro+1;
    }else{
        return inteiro;
    }
}

int main(void){
    int tam;
    scanf("%d",&tam);
    int v[tam];

    for(int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    int intero = vetor_para_inteiro(v,tam);
    printf("\n%d",intero);
    return 0;
}