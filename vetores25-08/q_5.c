#include<stdio.h>

int main(void){
    int tam1 ,tam2;
    scanf("%d%d",&tam1,&tam2);
    int v1[tam1],v2[tam2];
    int cont=0;
    
    printf("V1 agora\n");
    for(int i = 0;i<tam1;i++){
        scanf("%d",&v1[i]);
    }
    
    printf("V2 agora\n");
    for(int i = 0;i<tam2;i++){
        scanf("%d",&v2[i]);
    }

        if(tam1>tam2){
            printf("\nV1 é maior q V2");
            return 0;
        }
        else{
            for(int i =0 ;i<tam1;i++){
                for(int j = 0;j<tam2;j++){
                   if(v1[i]==v2[j]){
                        cont++;
                        j=tam2;
                   }
                }
            }
        }
    cont==tam1?printf("\nVERDADEIRO"):printf("\nFALSO");    
    
    return 0;

}