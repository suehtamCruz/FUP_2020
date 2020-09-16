#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h> 
#include<ctype.h>



int VetToInt(int v[],int tam){
    int num=0;
    int pot = tam;
    for(int i=0;i<tam;i++){
        num+= (v[i] * pow(10,(pot-1)));
        pot--;
    }
    return num;
}


////////////////////////////////////////////////////////////////////////////////////////////
int contCarac(char cad[],char c[],int tam){
    int times =0;
    for(int i=0;i<tam;i++){
        if(c[0]==cad[i]){
            times++;
        }
    }
    return times;
}

////////////////////////////////////////////////////////////////////////////////////////////

void isAnagram(char p1[], char p2[], int tam){
    int cont=0;
    int is;
    int tamAna = tam;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tamAna;j++){
            if(p1[i]==p2[j]){
                cont++;
                j=tamAna+1;
            }
        }
    }
    cont == tam ? printf("true") : printf("false");
}

///////////////////////////////////////////////////////////////////////////////////////////////
int len=0;

void bigPosValue(int m[][len],int lin){

    int linMaior,colMaior,maiorVal;

    for(int i=0;i<lin;i++){
        for(int j=0;j<len;j++){
            if(i==0 && j==0){
                maiorVal = m[i][j];
            }
            if(m[i][j] > maiorVal){
                linMaior = i;
                colMaior = j;
                maiorVal = m[i][j];
            }
        }
    }
    printf("lin: %d, col: %d , value: %d ;",linMaior,colMaior,maiorVal);
}

//////////////////////////////////////////////////////////////////////////////////////
int sorteados[4][4] = { 1, 4 , 23 , 12,
                        10 , 5, 22, 2 ,
                        16, 3 , 8 , 9,
                        15, 20 , 25 ,6 
                    };

int sorteio(int cart[]){
    int cont = 0;
    for(int c = 0;c<16;c++){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(cart[c] == sorteados[i][j]){
                    cont++;
                    i=5;
                }
            }
        }
    }
    return cont;
}

////////////////////////////////////////////////////////////////////////////
void removeEqual(int v[],int tam){
    
    int unique[tam];

    for(int i=0;i<tam;i++){
        unique[i] = v[i];
    };
    for(int i=0;i<tam;i++){
        for(int j=1;j<tam;j++){
            if(unique[i] == v[j]){
                v[j] = 0;
            }
        }
    }printf("\n");
    for(int i=0;i<tam;i++){
        if(v[i]!=0){
            printf("%d ",v[i]);
        }
    }
}



int main(void){

    //////questao 1/////////
        // int tam;
        // scanf("%d",&tam);
        // int v[tam];
        
        // for(int i=0;i<tam;i++){
        //     scanf("%d",&v[i]);
        // };
        // int inteiro = VetToInt(v,tam);
        // printf("%d\n",inteiro);
    ////////////////////////



    //////questao 2/////////
        // int tam;
        // scanf("%d",&tam);
        // int v[tam];

        // for(int i=0;i<tam;i++){
        //     scanf("%d",&v[i]);
        // }
        // removeEqual(v,tam);
    ////////////////////////




    //////questao 3/////////
        // char cadeia[100],c[1];
        // scanf("%c ",&c[0]);
        // scanf("%[^\n]",cadeia);
        // int tamanho = strlen(cadeia);
        // int times = contCarac(cadeia,c,tamanho);
        // printf("%d\n",times);
        
    ////////////////////////



    //////questao 4/////////
        // char p1[100],p2[100];
        
        // scanf("%[^\n] ",p1);
        // scanf("%[^\n]",p2);

        // int tam= 0;
        // tam = strlen(p1);
        // isAnagram(p1,p2,tam);
    ////////////////////////




    //////questao 5/////////

        // int lin,col;
        // scanf("%d%d",&lin,&col);
        // len = col;
        // int m[lin][col];

        // for(int i=0;i<lin;i++){
        //     for(int j=0;j<col;j++){
        //         scanf("%d",&m[i][j]);
        //     }
        // }
        // bigPosValue(m,lin);
    ////////////////////////


    //////questao 6/////////
        // int cartela[16];

        // for(int i=0;i<16;i++){
        //     scanf("%d",&cartela[i]);
        // }
        // int bingo = sorteio(cartela);
        // printf("\n%d\n",bingo);
    ////////////////////////


    return 0;
