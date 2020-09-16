#include<stdio.h>

int main(){
	int mat[3][3];
	int a;
	
	int i=0;
	int j=0;
	scanf("%d", &a);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &mat[i][j]);
			mat[i][j]= (mat[i][j]) * a;
		}
	}
	int vet[9];
	int i2=0;
	int j2=0;
	int cont=0;
	for(i2=0;i2<3 ;i2++){
    	for(j2=0;j2<3;j2++){
            vet[cont] = mat[i2][j2];
            cont++;
       }
	}
	int v=0;
	for(v;v<9;v++){
		printf("%d\n", vet[v]);
	}
}