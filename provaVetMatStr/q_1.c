#include<stdio.h>
#include<math.h>


int VetToInt(int v[],int tam){
    int num=0;
    int pot = tam-1;
    for(int i=0;i<tam;i++){
        
        num+= (v[i] * pow(10,(pot)));
        pot--;
    }
    return num;
}

int main(void){
    
    int tam;
    scanf("%d",&tam);
    int v[tam];
    
    for(int i=0;i<tam;i++){
        scanf("%d",&v[i]);
    };
    int inteiro = VetToInt(v,tam);
    printf("%d\n",inteiro);
    return 0;
}