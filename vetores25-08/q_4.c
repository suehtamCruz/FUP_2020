#include<stdio.h>

int isEqual(int v1[],int tam1,int v2[],int tam2){
    int cont =0;
    if(tam1==tam2){
        for(int i=0;i<tam1;i++){
            if(v1[i]==v2[i]){
                cont++;
            }
        }
        if(cont==tam1){
            return 1;
        }else{
           return 0;
        }
    }else{
        return 0;
    }

}

int main(void){
    int len1,len2;
    scanf("%d%d",&len1,&len2);
    int v1[len1],v2[len2];
    printf("v1 agora\n");
    for(int i = 0;i<len1;i++){
        scanf("%d",&v1[i]);
    }
    printf("V2 agora\n");
    for(int i = 0;i<len2;i++){
        scanf("%d",&v2[i]);
    }   
    isEqual(v1,len1,v2,len2)==1?printf("\nVERDADEIRO"):printf("\nFALSO");
    return 0;
}