#include<stdio.h>
#include<string.h>

int copyString (char str1[], int tam, char copied[]){

    int tamFont = strlen(str1);
    int cont=0;
    if(tam>tamFont){
        for(int i=0;i<tamFont;i++){
            copied[i]=str1[i];
            cont++;
        }
    }else{
        for(int i=0;i<tam;i++){
            copied[i]=str1[i];
            cont++;
        }
    }
    return cont;
}

int main(void){
    int tam;
    char string[100];
    scanf("%d",&tam);
    scanf("%s",string);
    char copy[tam];
    int caracCopied = copyString(string,tam,copy);
    printf("%d\n",caracCopied);

    return 0;
}