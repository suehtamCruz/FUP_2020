#include<stdio.h>

struct aluno{
    int matricula;
    float notas[3];
};

float media_notas(float *not){

    float soma=0;
    for(int i=0;i<3;i++){
        soma+=*not;
        not++;
    }
    float media = soma/3;
    return media;

}

int aprovacao(float media){
    if(media>=7){
        return 1;
    }
    if(media < 7 && media >=4){
        return 0;
    }
    if(media<4){
        return -1;
    }
}

int main(void){
    struct aluno alu2;
    float *pNotas;

    scanf("%d",&alu2.matricula);

    for(int i=0;i<3;i++){
        scanf("%f",&alu2.notas[i]);
    }
    pNotas = alu2.notas;
    
    float media = media_notas(pNotas);

    int res = aprovacao(media);
    printf("%d\n",res);
}