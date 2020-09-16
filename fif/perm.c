#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int isEqual(int n1,int n2){
    int equal = 0;
    if(n1==n2){
        equal =1;
    }
    return equal;

}
int main(void){
    char n1[20],n2[20];    
    scanf("%s",&n1);
    scanf("%s",&n2);

    int tam1 ,tam2;
    tam1 = strlen(n1);
    tam2 = strlen(n2);

    int igual = isEqual(tam1,tam2);
    int cont = 0;
    if(igual==1){
        for(int i=0;i<tam1;i++){
            for(int j =0;j<tam1;j++){
                if(n1[i]==n2[j]){
                    cont++;
                    j=tam1;
                }
            }
        }
        cont==tam1?printf("True\n"):0;
    }else{
        printf("False\n");
    }

 
    return 0;
}