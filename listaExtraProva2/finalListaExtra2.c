#include<stdio.h>

void soma_linha_coluna(int m[][4],int col[],int lin[]){
    int somaLin=0;
    for(int i=0;i<4;i++){
        for(int l=0;l<4;l++){
            for(int c=0;c<4;c++){
                somaLin += m[l][c];
            }
            lin[l] = somaLin;
            somaLin=0;
        }
    };
    int somaCol=0;
    for(int i=0;i<4;i++){
        for(int c=0;c<4;c++){
            for(int l=0;l<4;l++){
                somaCol+=m[l][c];
            }
            col[c] = somaCol;
            somaCol=0;
        }
    }
}

int vetor_para_inteiro(int v[],int tam){
    int inteiro =0;
    int tamanho = tam;
    for(int i=0;i<tam;i++){
        tamanho--;
        inteiro += (v[i] * pow(10,tamanho));
    }
    if(tam==3){
        return inteiro+1;
    }else{
        return inteiro;
    }
}

int main(void){
    /////////////////////////////////questao 1/////////////////////////
        // int tam;
        // scanf("%d",&tam);
        // int v[tam];

        // for(int i=0;i<tam;i++){
        //     scanf("%d",&v[i]);
        // }
        // int intero = vetor_para_inteiro(v,tam);
        // printf("\n%d",intero);
    //////////////////////////////////////////////////////////////////
    


    
    /////////////////////////////////questao 2/////////////////////////
            
        // int vcoluna[4],vlinha[4];
        // int m[4][4];
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<4;j++){
        //         scanf("%d",&m[i][j]);
        //     }
        // }
        // printf("\n");
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<4;j++){
        //         printf("%d\t",m[i][j]);
        //     }printf("\n");
        // }
        // printf("\n");
        // soma_linha_coluna(m,vcoluna,vlinha);
        // printf("%d\n",vlinha[0]);
        // printf("%d\n",vcoluna[0]);
    //////////////////////////////////////////////////////////////////
    return 0;
}