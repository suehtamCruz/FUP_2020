#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

////////////////////estrutura e funcao para questao 1//////////////////////

struct aluno{
    char *pNome;
    int idade;
    float peso;

};

int soma_idades(struct aluno alunos[],int qtd){
    int soma=0;
    for(int i = 0; i < qtd ; i++){
        soma+= alunos[i].idade;
    }
    return soma;
}

////////////////////////////////funcao para a questao 2 //////////////////////

int *posicao_maior_idade(struct aluno alunos[],int qtd_alunos){
    int *pos_maior;
    for(int i=0;i<qtd_alunos;i++){
        if(i==0){
            pos_maior = &alunos[i].idade;
        }
        else if(*pos_maior < alunos[i].idade){
            pos_maior = &alunos[i].idade;
        }
    }
    return pos_maior;
}

/////////////////////////////////funcao para a questao 3////////////////////////////

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

//////////estrutura e funcao questao 4///////////////////

struct quadrante{
    bool vet[4];
};

void zera_quadrante(struct quadrante *pQuad){
    for(int i=0;i<4;i++){
        pQuad->vet[i] = false;
    }
}



int main(void){
    ////////////////////////////////////questao 1 ///////////////////////////////////
        // int qtd_alunos;
        // scanf("%d",&qtd_alunos);

        // struct aluno alunos[qtd_alunos];
        // char str_aux[50];

        // for(int i = 0;i < qtd_alunos; i++){
            
        //     scanf(" %[^\n] ",str_aux);
        //     alunos[i].pNome = str_aux;
        
        //     scanf("%d %f", &alunos[i].idade , &alunos[i].peso);
        // }
        // int soma = soma_idades(alunos,qtd_alunos);
        // printf("\n%d anos no total",soma);
    /////////////////////////////////////////////////////////////////////////////////
    


    ////////////////////////////////////questao 2 ///////////////////////////////////
        // int qtd_alunos,tam_string;
        // scanf("%d",&qtd_alunos);

        // struct aluno alunos[qtd_alunos];
        // char str_aux[50];

        // for(int i = 0;i < qtd_alunos; i++){
            
        //     scanf(" %[^\n] ",str_aux);
        //     alunos[i].pNome = str_aux;
        
        //     scanf("%d %f", &alunos[i].idade , &alunos[i].peso);
        // }
        // int *posicao_maior = posicao_maior_idade(alunos,qtd_alunos);
        // printf("%p\n",posicao_maior);
    /////////////////////////////////////////////////////////////////////////////////
    
    ////////////////////////////////////questao 3 ///////////////////////////////////
        // int vet[5];
        // for(int i=0;i<5;i++){
        //     scanf("%d",&vet[i]);
        // }
        // int menor;
        // int *pVet = vet;
        // int *pMenor = &menor;
        // menor_no_vetor(pVet,pMenor);
        // printf("\n%d",*pMenor);
    /////////////////////////////////////////////////////////////////////////////////
    

    
    ////////////////////////////////////questao 4 ///////////////////////////////////
        // struct quadrante *pQuad;
        // zera_quadrante(pQuad);  
    /////////////////////////////////////////////////////////////////////////////////
    
    return 0;
}