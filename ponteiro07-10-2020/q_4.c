#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct quadrante{
    bool vet[4];
};

void zera_quadrante(struct quadrante *pQuad){
    for(int i=0;i<4;i++){
        pQuad->vet[i] = false;
    }
}

int main(void){
    struct quadrante *pQuad;
    zera_quadrante(pQuad);
    
    return 0;
}