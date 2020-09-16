#include<stdio.h>

void sumMat(int m[][4],int n[][4],int r[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            r[i][j] = m[i][j] + n[i][j];
        }
    }
}

void multiplic(int m[][3],int mul){
    for(int i=0;i<3;i++){  
        for(int j=0;j<3;j++){
            m[i][j] *=mul;
        }
    }
}


void preenhe1(int m[][20]){
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            m[i][j] = 1;
        }
    }
}

int menorInMatriz(int m[][8]){
    int menor=0;
    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){

            if(i==0 && j==0){
                menor = m[i][j];
            }
            if(m[i][j] < menor){
                menor = m[i][j];
            }

        }
    }
    
    return menor;
}



int main(void){
    //questao 1//
        // int lin,col;

        // printf("lin\n");
        // scanf("%d",&lin);
        // printf("col\n");
        // scanf("%d",&col);

        // int m[lin][col];
        // for(int i=0;i<lin;i++){
        //     for(int j=0;j<col;j++){
        //         scanf("%d",&m[i][j]);
        //     }
        // }
        // lin==col?printf("Simetrica\n"):printf("Nao simetrica\n");
    


    //questao 2//
        // int m[4][4],n[4][4],r[4][4];
        // printf("m\n");

        // for(int i=0;i<4;i++){
        //     for(int j=0;j<4;j++){
        //         scanf("%d",&m[i][j]);
        //     }
        // }
        // printf("\nn:\n");
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<4;j++){
        //         scanf("%d",&n[i][j]);
        //     }
        // }
        // sumMat(m,n,r);
        



        //questao 3//
            //int mat[3][3],v[9],mult;
            
            // printf("mult\n");
            // scanf("%d",&mult);

            // printf("\nmat\n");
            // for(int i=0;i<3;i++){
            //     for(int j=0;j<3;j++){
            //         scanf("%d",&mat[i][j]);
            //     }
            // }
            // multiplic(mat,mult);
            // int posVet=0;
            // for(int i=0;i<3;i++){
            //     for(int j=0;j<3;j++){
            //         v[posVet] = mat[i][j];
            //         posVet++;
            //     }
            // }
            // printf("\n");
            // for(int i=0;i<9;i++){
            //     printf("%d ",v[i]);
            // }






        //questao 4//
            // int mat[20][20];
            // preenhe1(mat);

            // for(int i=0;i<20;i++){
            //     mat[i][i] = 0;
            // }




        //questao 5 //
            //int mat[8][8];

            // for(int i=0;i<8;i++){
            //     for(int j=0;j<8;j++){
            //         scanf("%d",&mat[i][j]);
            //     }
            // }
            // int menor = menorInMatriz(mat);
            // printf("\n%d\n",menor);

    return 0;
}