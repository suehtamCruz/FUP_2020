#include<stdio.h>

void menor_no_vetor(int *pVet, int *pMenor){
    for(int i=0;i<5;i++){
        if(i == 0){
            *pMenor = *pVet;
            pVet++;
        }
        else if(*pVet < *pMenor){
           
            *pMenor = *pVet;
            pVet++;
            
        }else{
            pVet++;
        }
    }
}

int main(void){
    
    int vet[5];
    for(int i=0;i<5;i++){
        scanf("%d",&vet[i]);
    }
    int menor;
    int *pVet = vet;
    int *pMenor = &menor;
    menor_no_vetor(pVet,pMenor);
    printf("\n%d",*pMenor);
    return 0;
}
