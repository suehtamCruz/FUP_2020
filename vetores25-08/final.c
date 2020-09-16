#include<stdio.h>

int menorInVet(int vet[],int tam){
    int menor = 0;

    for(int i=0;i<tam;i++){
        if(i==0){
            menor = vet[i];
        }
        if(vet[i]<menor){
            menor = vet[i];
        }
    };
    return menor;
}
int maiorInVet(int vet[],int tam){
    int maior = 0;

    for(int i=0;i<tam;i++){
        if(i==0){
            maior = vet[i];
        }
        if(vet[i]>maior){
            maior = vet[i];
        }
    };
    return maior;
}
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



    /////////////////////questao 1////////////////////
        // int length;
        // scanf("%d",&length);
        // int v[length];
        // for(int i=0;i<length;i++){
        //     scanf("%d",&v[i]);
        // }
        // int menor = menorInVet(v,length);
        // printf("\n%d", menor);
        
    
    
    
    /////////////////////questao 2////////////////////
        // int length;
        // scanf("%d",&length);
        // int v[length];
        // for(int i=0;i<length;i++){
        //     scanf("%d",&v[i]);
        // }
        // int maior = maiorInVet(v,length);
        // printf("\n%d", maior);
        


    
    /////////////////////questao 3////////////////////
        // int length;
        // scanf("%d",&length);
        // int vetor[length];
        // for(int i = 0;i<length;i++){
        //     scanf("%d",&vetor[i]);
        // }
        // int maior = maiorInVet(vetor,length);
        // int menor = menorInVet(vetor,length);
        // int soma = maior+menor;
        // printf("\n%d",soma);
    


  
    /////////////////////questao 4////////////////////
        // int len1,len2;
        // scanf("%d%d",&len1,&len2);
        // int v1[len1],v2[len2];
        // printf("v1 agora\n");
        // for(int i = 0;i<len1;i++){
        //     scanf("%d",&v1[i]);
        // }
        // printf("V2 agora\n");
        // for(int i = 0;i<len2;i++){
        //     scanf("%d",&v2[i]);
        // }   
        // isEqual(v1,len1,v2,len2)==1?printf("\nVERDADEIRO"):printf("\nFALSO");
    


    /////////////////////questao 5////////////////////
        // int tam1 ,tam2;
        // scanf("%d%d",&tam1,&tam2);
        // int v1[tam1],v2[tam2];
        // int cont=0;
        
        // printf("V1 agora\n");
        // for(int i = 0;i<tam1;i++){
        //     scanf("%d",&v1[i]);
        // }
        
        // printf("V2 agora\n");
        // for(int i = 0;i<tam2;i++){
        //     scanf("%d",&v2[i]);
        // }

        //     if(tam1>tam2){
        //         printf("\nV1 é maior q V2");
        //         return 0;
        //     }
        //     else{
        //         for(int i =0 ;i<tam1;i++){
        //             for(int j = 0;j<tam2;j++){
        //             if(v1[i]==v2[j]){
        //                     cont++;
        //                     j=tam2;
        //             }
        //             }
        //         }
        //     }
        // cont==tam1?printf("\nVERDADEIRO"):printf("\nFALSO");   

    return 0;
}