#include<stdio.h>
///////////////estrutura e funcao para a questao 1/////////////////////
struct resultados{
    float soma;
    float sub;
    float divi;
    float multi;
};

void operacoes(float n1, float n2){
    struct resultados res_operacoes;

    res_operacoes.soma = n1 + n2;
    res_operacoes.sub = n1 - n2;
    res_operacoes.divi = n1 / n2;
    res_operacoes.multi = n1 * n2;

    printf("soma : %0.2f\n",res_operacoes.soma);
    printf("sub.: %0.2f\n",res_operacoes.sub);
    printf("divi.: %0.3f\n",res_operacoes.divi);
    printf("mult.: %0.2f\n",res_operacoes.multi);

}

//////////////////// estrutura e funcao questoes 2 e 3//////////////////
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
//////////funcao a mais questao 3////////////
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
///////////////////estrutura e funcao questao 4//////////////////
struct data{
    int dia;
    int mes;
    int ano;
};

void datas_iguais(struct data *pdata1, struct data *pdata2){
    int auxiliar_iguais = 0;
    if(pdata1->ano == pdata2->ano){
        auxiliar_iguais++;
    }
    if(pdata1->dia == pdata2->dia){
        auxiliar_iguais++;
    }
    if(pdata1->mes == pdata2->mes){
        auxiliar_iguais++;
    }
     
    auxiliar_iguais == 3 ? printf("1\n") : printf("0\n") ;

}


int main(void){
    //////////////////////////questao 1/////////////////////////////
        // float num1,num2;
        // scanf("%f%f",&num1,&num2);
        // operacoes(num1,num2);

    ////////////////////////////////////////////////////////////////
    




    //////////////////////////questao 2/////////////////////////////
        // struct aluno alu1;
        // float *pNotas;

        // scanf("%d",&alu1.matricula);

        // for(int i=0;i<3;i++){
        //     scanf("%f",&alu1.notas[i]);
        // }
        // pNotas = alu1.notas;

        // float media = media_notas(pNotas);
        // printf("matric.: %d\n",alu1.matricula);
        // printf("media: %0.2f",media);

    ////////////////////////////////////////////////////////////////
    


    //////////////////////////questao 3/////////////////////////////
        // struct aluno alu2;
        // float *pNotas;

        // scanf("%d",&alu2.matricula);

        // for(int i=0;i<3;i++){
        //     scanf("%f",&alu2.notas[i]);
        // }
        // pNotas = alu2.notas;
        
        // float media = media_notas(pNotas);

        // int res = aprovacao(media);
        // printf("%d\n",res);
    ////////////////////////////////////////////////////////////////
    



    //////////////////////////questao 4/////////////////////////////
        // struct data data1,*pData1, data2,*pData2;
        // printf("DATA 1:(dia mes ano)\n");
        // scanf("%d%d%d", &data1.dia , &data1.mes , &data1.ano);
        // pData1 = &data1;
        
        // printf("DATA 2: (dia mes ano)\n");
        // scanf("%d%d%d", &data2.dia , &data2.mes , &data2.ano);
        // pData2 = &data2;

        // datas_iguais(pData1,pData2);
    ////////////////////////////////////////////////////////////////


    return 0;
}