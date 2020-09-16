#include<stdio.h>
#include<string.h>

int posicao;
int posEqual(char sub[],char str[]){
    
    posicao =0;
    int verificator=0;

    int pos =0,cont=0;
    
    int tamSub = strlen(sub);
    int tamStr= strlen(str);

    for(int i=0;i<tamStr;i++){
        if(sub[0]==str[i]){
            cont++;

            while(verificator==0){
                posicao=i;
                verificator++;
            }

            for(int j=1;j<tamSub;j++){
                i+=1;
                
                if(sub[j]==str[i]){
                    cont++;
                }
               
            }
        }
    }
    return cont;
}

int main(void){
    char string[50], trecho[10];
    scanf("%[^\n] ",trecho);
    scanf("%[^\n]",string);

    int pos=0;
    int haveInString= posEqual(trecho,string);
    int tamTrecho = strlen(trecho);
    int tamString = strlen(string);

    if(haveInString==tamTrecho){
        for(int i=0;i<tamString;i++){
            if(trecho[0]==string[i]){
                pos=i;
                i=tamString+1;
            }
        }
    }
    posicao==pos ? printf("1\n") : printf("0\n");
    return 0;
}