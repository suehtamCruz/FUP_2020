#include<stdio.h>
#include<string.h>

int big(char str1[],char str2[]){
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);

    if(tam1==tam2){
        return 0;
    }else{
        if(tam1>tam2){
            return tam1;
        }
        if(tam2>tam1){
            return tam2;
        }
    }   
}
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
void isBeggin(char menor[],char maior[]){
    int tamMenor = strlen(menor);
    int cont=0;
    for(int i=0;i<tamMenor;i++){
        if(menor[i] == maior[i]){
            cont++;
        }
    }
    cont==tamMenor ? printf("verdadeiro\n") : printf("falso\n");
}

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
    
    ///////////////////questao 1//////////////////////
        // char str1[100],str2[100];
        // scanf("%[^\n] ",str1);
        // scanf("%[^\n]",str2);

        // int maior = big(str1,str2);
        // printf("%d\n",maior);



    ///////////////////questao 2//////////////////////
        // int tam;
        // char string[100];
        // scanf("%d",&tam);
        // scanf("%s",string);
        // char copy[tam];
        // int caracCopied = copyString(string,tam,copy);
        // printf("%d\n",caracCopied);





    ///////////////////questao 3//////////////////////
        // char str[100],c;
        // scanf("%[^\n] ",str);
        // scanf("%c",&c);
        // int timeRepeat = contCarac(str,c);
        // printf("%d\n",timeRepeat);



    ///////////////////questao 4//////////////////////
        // char strMenor[50],strMaior[50];
        // scanf("%[^\n] ",strMenor);
        // scanf("%[^\n]",strMaior);

        // isBeggin(strMenor,strMaior);




    ///////////////////questao 5//////////////////////
        // char string[50], trecho[10];
        // scanf("%[^\n] ",trecho);
        // scanf("%[^\n]",string);

        // int pos=0;
        // int haveInString= posEqual(trecho,string);
        // int tamTrecho = strlen(trecho);
        // int tamString = strlen(string);

        // if(haveInString==tamTrecho){
        //     for(int i=0;i<tamString;i++){
        //         if(trecho[0]==string[i]){
        //             pos=i;
        //             i=tamString+1;
        //         }
        //     }
        // }
        // posicao==pos ? printf("1\n") : printf("0\n");



    return 0;
}