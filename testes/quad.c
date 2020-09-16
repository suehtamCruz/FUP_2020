#include <stdio.h>
#include <math.h>

int cont;

int main(){
    cont=0;
    int ni,nf;
    scanf("%d%d",&ni,&nf);

    for(int i = ni; i<=nf;i++){
        if(sqrt(i) == floor( sqrt(i) )){
            cont++;
        }
    }
    int vet[cont];
    int contVet=0;
    for(int i = ni; i<=nf;i++){

        if(sqrt(i) == floor( sqrt(i) )){
            vet[contVet]=i;
            contVet++;
        }
    }
    for(int i=0;i<cont;i++){
        printf(" %d",vet[i]);
    }
    return 0;
}   