#include<stdio.h>

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
    auxiliar_iguais ==3 ? printf("1\n") : printf("0\n") ;

}

int main(void){
    struct data data1,*pData1, data2,*pData2;
    printf("DATA 1:(dia mes ano)\n");
    scanf("%d%d%d", &data1.dia , &data1.mes , &data1.ano);
    pData1 = &data1;
    
    printf("DATA 2: (dia mes ano)\n");
    scanf("%d%d%d", &data2.dia , &data2.mes , &data2.ano);
    pData2 = &data2;

    datas_iguais(pData1,pData2);
    
    return 0;
}