#include<stdio.h>


///////////////////////////////funcao para a questao 1///////////////////////////////////////
int numero_incrementado(int *p,int num){
    int num_incre = num + *p;
    
    return num_incre;
}

///////////////////////////////funcao para a questao 2///////////////////////////////////////
void troca_valores(int *p1,int *p2 ,int aux){
    
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
    printf("%d\t%d",*p1,*p2);
}

///////////////////////////////funcao para a questao 3///////////////////////////////////////
void primeira_ocorrencia(char *pStr , char *pCara,int tamStr){
    char *primeiro ;
    int cont =0;
    for(int i=0;i<tamStr;i++){
        if(*pCara == *pStr){
            primeiro = pStr;
            cont++;
            i=tamStr;

        }else{
            pStr++;
        }
    }
    cont == 0 ? printf("NULL\n") : printf("%p\n",&primeiro);
}

/////////////////////////funcoes para a 4 questao////////////////////////////////
char *ultima_posicao(char *pStr){
  
    char *posAux;
    while(*pStr < 127  && *pStr > 0){
        posAux=pStr;
        pStr++;
    }
    char *pUltima = posAux;
    return pUltima;
}
int tamanho_vetor(char *pIni , char *pUlt){
    int tam=0;
    while(pIni < pUlt){
        tam++;
        pIni++;
    }
    return tam+1;
}


int main(void){

    /////////////////////////questao 1/////////////////////
        // int numero, n;
        // scanf("%d%d",&numero,&n);
        // int *pN = &n;
        // int numInc = numero_incrementado(pN,numero);
        // printf("%d\n",numInc);
    ///////////////////////////////////////////////////////





    /////////////////////////questao 2/////////////////////
        // int num1,num2;
        // scanf("%d%d",&num1,&num2);
        // int *pNum1 = &num1;
        // int *pNum2 = &num2;

        // int auxTroca;
        // troca_valores(pNum1,pNum2,auxTroca);
    ///////////////////////////////////////////////////////



    /////////////////////////questao 3/////////////////////
        // char str[50],carac[1];
        // scanf("%[^\n] ",str);
        // scanf("%c",&carac[0]);

        // char *pStr = str;
        // char *pCarac = carac;

        // int tamString = strlen(str);
        // primeira_ocorrencia(pStr,pCarac,tamString);
    ///////////////////////////////////////////////////////



    /////////////////////////questao 4/////////////////////
        // char str[20];
        // scanf("%[^\n]", str);
        // char *pStr = str;
        // char *pUltima ;
        // pUltima = ultima_posicao(pStr);
        // int tamanhoStr = tamanho_vetor(pStr,pUltima);

        // printf("%d\n",tamanhoStr);
    ///////////////////////////////////////////////////////




    return 0;
}