#include<stdio.h>
#include<string.h>

int contCarac(char cad[],char c[],int tam){
    int times =0;
    for(int i=0;i<tam;i++){
        if(c[0]==cad[i]){
            times++;
        }
    }
    return times;
}


int main(void){
    char cadeia[100],c[1];
    scanf("%c ",&c[0]);
    scanf("%[^\n]",cadeia);
    int tamanho = strlen(cadeia);
    int times = contCarac(cadeia,c,tamanho);
    printf("%d\n",times);
    return 0;
}