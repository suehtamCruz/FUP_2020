#include<stdio.h>

int fibonacci(int n){
    int value;
    if( n == 2 || n == 3){
        value = 1;
    }else{
        value = fibonacci(n-1) + fibonacci(n-2);
    }
    return value;
}


int enesimo_sequencia(int n){
    
    if(n==1 || n==2){
        return 1;
    }else if(n==3){
        return 2;
    }else{
        return enesimo_sequencia(n-2) + enesimo_sequencia(n-3);
    }

}



int sum(int v[],int tam){
    int soma=0;
    if(tam>0){    
       
        soma = v[tam - 1] + sum(v,tam-1);
    }
    return soma;
}



void copia_vetor(int origem[], int copia[],int tam){
    if(tam>0){
        copia[tam-1] = origem[tam-1];
        copia_vetor(origem,copia,tam-1);
    }else if(tam==0){
        copia[0] = origem[0];
    }
}


int main(void){
    /////////////////questao 1 ///////////////////////
        // int pos;
        // scanf("%d",&pos);
        // int fib = fibonacci(pos);
        // printf("%d",fib);
    //////////////////////////////////////////////////





    /////////////////questao 2 ///////////////////////
        // int n;
        // scanf("%d",&n);
        // int valor = enesimo_sequencia(n);
        // printf("\n%d\n",valor);
    //////////////////////////////////////////////////


    /////////////////questao 3 ///////////////////////
        // int tam;
        // scanf("%d",&tam);
        // int v1[tam],v2[tam];
        
        // for(int i=0;i<tam;i++){
        //     scanf("%d", &v1[i]);
        // }
        // printf("\n"); 

        // copia_vetor(v1,v2,tam);
        
        // for(int i=0;i<tam;i++){
        //     printf("%d ",v2[i]);
        // }
    //////////////////////////////////////////////////





    /////////////////questao 4 ///////////////////////
        // int tam;
        // scanf("%d",&tam);
        // int v[tam];
        // for(int i=0;i<tam;i++){
        //     scanf("%d",&v[i]);
        // }
        // int soma = sum(v,tam);
        // printf("%d",soma);
    //////////////////////////////////////////////////



    return 0;
}