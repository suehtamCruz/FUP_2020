#include<stdio.h>

void copy(int v[],int tam,int vetCop[]){
    for(int i=0;i<tam;i++){
        vetCop[i]=v[i];
    }
}

int somaVet(int v[],int tam){
    int soma=0;
    for(int i=0;i<tam;i++){
        soma+=v[i];
    }
    return soma;
}


int flagInVet(int vetor[] , int tam,int ele){
    int flag = 0;
    for(int i=0;i<tam;i++){
        if(ele==vetor[i]){
            flag = 1;
        }
    }
    return flag;
}


void invertPos(int v[],int pos1,int pos2){
    int aux;
    aux = v[pos1];
    v[pos1] = v[pos2];
    v[pos2] = aux;
}

void trocaVetor(int v1[],int v2[],int tam){
    int aux;
    for(int i=0;i<tam;i++){
        aux = v1[i];
        v1[i] = v2[i];
        v2[i] = aux;
    }
}

float media(float v[],int tam){
    float media=0,soma=0;

    for(int i=0;i<tam;i++){
        soma+=v[i];
    }
    media = (soma/tam);

    return media;
}


int main(void){

    ///////////////////////questao 1//////////////////////
        // int tam;
        
        // scanf("%d",&tam);

        // int vet[tam];
        // int vetCopia[tam];

        // for(int i=0;i<tam;i++){
        //     scanf("%d",&vet[i]);
        // }
        
        // copy(vet,tam,vetCopia);
        // printf("copy\n");
        // for(int i=0;i<tam;i++){
        //     printf("%d ",vetCopia[i]);
        // }



    ///////////////////////questao 2//////////////////////
        // int tam;
        // scanf("%d",&tam);
        // int vet[tam];
        // for(int i=0;i<tam;i++){
        //     scanf("%d",&vet[i]);       
        // }
        // int somaVetor = somaVet(vet,tam);
        
        // printf("\n%d",somaVetor);



    ///////////////////////questao 3//////////////////////
        // int tam;
        // printf("tamanho\n");
        // scanf("%d",&tam);

        // int v[tam];
        // printf("elementos no vetor\n");
        // for(int i=0;i<tam;i++){
        //     scanf("%d",&v[i]);
        // }
        
        // int ele;
        // printf("elemento\n");
        // scanf("%d",&ele);

        // int verify = flagInVet(v,tam,ele);
        // verify == 1 ? printf("\nVERDADEIRO") : printf("\nFALSO");
        



    ///////////////////////questao 4//////////////////////
        // int tam;
        // scanf("%d",&tam);
        // int v[tam];

        // for(int i = 0 ;i<tam;i++){
        //     scanf("%d",&v[i]);
        // }
        // int p1,p2;
        // printf("posicao 1 e 2\n");
        // scanf("%d%d",&p1,&p2);

        // invertPos(v,p1,p2);
        
        // printf("invertido\n");
        // for(int i=0;i<tam;i++){
        //     printf("%d ",v[i]);
        // }



    ///////////////////////questao 5//////////////////////
        //     int tam;
        // scanf("%d",&tam);
        // int v1[tam],v2[tam];
        
        // printf("vet 1\n");
        // for(int i =0;i<tam;i++){
        //     scanf("%d",&v1[i]);
        // }
        // printf("vet 2\n");
        // for(int i =0;i<tam;i++){
        //     scanf("%d",&v2[i]);
        // }

        // trocaVetor(v1,v2,tam);

        // printf("\ninvertido"); 

        // for(int i =0;i<tam;i++){
        //     printf("%d",v1[i]);
        // }

        // printf("\n");

        // for(int i =0;i<tam;i++){
        //     printf("%d",v2[i]);
        // }



        
    ///////////////////////questao 6//////////////////////

        //  int tam;
        // scanf("%d",&tam);

        // float notas[tam], mediaAlunos = 0;
        
        // for(int i=0;i<tam;i++){
        //     scanf("%f",&notas[i]);
        // }
        // mediaAlunos = media(notas,tam);
        // printf("media\n%0.2f",mediaAlunos);
    return 0;
}