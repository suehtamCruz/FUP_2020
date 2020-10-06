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

int main(void){
    struct aluno alu1;
    float *pNotas;

    scanf("%d",&alu1.matricula);

    for(int i=0;i<3;i++){
        scanf("%f",&alu1.notas[i]);
    }
    pNotas = alu1.notas;

    float media = media_notas(pNotas);
    printf("matric.: %d\n",alu1.matricula);
    printf("media: %0.2f",media);

    return 0;
}