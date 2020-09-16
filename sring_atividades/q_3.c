#include<stdio.h>
#include<string.h>

int contCarac(char str[],char c){
    int cont=0;
    int tamString = strlen(str);
    for(int i=0;i<tamString;i++){
        if(str[i]==c){
            cont++;
        }
    }
    return cont;
}

int main(void){
    char str[100],c;
    scanf("%[^\n] ",str);
    scanf("%c",&c);
    int timeRepeat = contCarac(str,c);
    printf("%d\n",timeRepeat);
    return 0;
}