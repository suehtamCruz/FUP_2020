#include<stdio.h>
#include<string.h>
#include<ctype.h>

int haveSpace(char str[]){
    int tam = strlen(str);
    int cont=0;
    for(int i=0;i<tam;i++){
        if(str[i]==' '){
            cont++;
        }
    }
    return cont;
}

int main(void){
    char string[100];
    scanf("%[^\n]",string);
    int space = haveSpace(string);
    space >0 ? printf("true\n") : printf("false\n");
    return 0;
}