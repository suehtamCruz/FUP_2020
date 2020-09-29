#include<stdio.h>
#include<string.h>

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

int main(void){
    char str[50],carac[1];
    scanf("%[^\n] ",str);
    scanf("%c",&carac[0]);

    char *pStr = str;
    char *pCarac = carac;

    int tamString = strlen(str);
    primeira_ocorrencia(pStr,pCarac,tamString);
    return 0;
}