#include<stdio.h>
#include<string.h>

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
    char str[20];
    scanf("%[^\n]", str);
    char *pStr = str;
    char *pUltima ;
    pUltima = ultima_posicao(pStr);
    int tamanhoStr = tamanho_vetor(pStr,pUltima);

    printf("%d\n",tamanhoStr);
    return 0;
}