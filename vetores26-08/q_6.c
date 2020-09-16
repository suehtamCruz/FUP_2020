#include<stdio.h>

float media(float v[],int tam){
    float media=0,soma=0;

    for(int i=0;i<tam;i++){
        soma+=v[i];
    }
    media = (soma/tam);

    return media;
}

int main(void){
    int tam;
    scanf("%d",&tam);

    float notas[tam], mediaAlunos = 0;
    
    for(int i=0;i<tam;i++){
        scanf("%f",&notas[i]);
    }
    mediaAlunos = media(notas,tam);
    printf("media\n%0.2f",mediaAlunos);

    return 0;
}