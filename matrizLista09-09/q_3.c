#include<stdio.h>

void multiplic(int m[][3],int mul){
    for(int i=0;i<3;i++){  
        for(int j=0;j<3;j++){
            m[i][j] *=mul;
        }
    }
}

int main(void){
    int mat[3][3],v[9],mult;
    
    printf("mult\n");
    scanf("%d",&mult);

    printf("\nmat\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    multiplic(mat,mult);
    int posVet=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            v[posVet] = mat[i][j];
            posVet++;
        }
    }
    printf("\n");
    for(int i=0;i<9;i++){
        printf("%d ",v[i]);
    }
    return 0;
}