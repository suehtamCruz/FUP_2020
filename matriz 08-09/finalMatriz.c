#include<stdio.h>

void preenche1(int m[][20]){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            m[i][j] = 1;
        }
    }
}  


void preenche0(int m[][20]){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            m[i][j] = 0;
        }
    }
} 


int maiorNaMatriz(int m[][4]){
    int maior=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(m[i][j]>maior){
                maior = m[i][j];
            }
        }       
    }
    return maior;

}


void inverteLinha(int m[][4],int l1[],int l4[]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0){
                m[i][j] = l4[j];
            }
            if(i==3){
                m[i][j] = l1[j];
            }
        }
    }
}



int sumAll(int m[][3]){
    int soma=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            soma+=m[i][j];
        }
    }
    return soma;
}




int main(void){
    //questao 1//
        // int mat[20][20];
        // preenche1(mat);



    //questao 2//
        // int mat[20][20];
        // preenche0(mat);
        
        // for(int i=0;i<20;i++){
        // mat[i][i] = 1;
        // }
        


    //questao 3//
        // int mat[4][4];
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<4;j++){
        //         scanf("%d",&mat[i][j]);
        //     }
        // }
        // int maior = maiorNaMatriz(mat);
        // printf("\n%d\n",maior);



    //questao 4//
        // int mat[4][4];
        // int linha1[4],linha4[4];
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<4;j++){
        //         scanf("%d",&mat[i][j]);
        //         if(i==0){
        //             linha1[j]=mat[i][j];
        //         }
        //         if(i==3){
        //             linha4[j]=mat[i][j];
        //         }
        //     }
        // }
        // inverteLinha(mat,linha1,linha4);
    



    //questao 5//
        //   int mat[3][3];
        // for(int i=0;i<3;i++){
        //     for(int j=0;j<3;j++){
        //         scanf("%d",&mat[i][j]);
        //     }
        // }
        // int soma = sumAll(mat);
        // printf("\n%d\n",soma);
    return 0;
}