#include<stdio.h>
#include<string.h>

struct itemCompra{
    char nome[200];
    float preco;
    int qtd;
};

float preco_total (struct itemCompra items[], int qtd_items){
    
    float total = 0;
  
    for(int i = 0; i < qtd_items; i++){
        total += (items[i].preco * items[i].qtd);
    }

    return total;
}

int main(){
    
    int qtd_items;
    
    /// aqui da o tamanho do vetor de itens
    scanf("%d",&qtd_items);

    /// criado o vetor do tipo struct itemCompra 
    struct itemCompra items[qtd_items];

    //no for seta os valores da estrutura para cada posicao do vetor 
    for(int i = 0; i < qtd_items ; i++){
        scanf(" %[^\n] ",items[i].nome);
        scanf("%f%d",&items[i].preco , &items[i].qtd);
    }
    float total = preco_total(items,qtd_items);
    printf("%0.3f\n",total);
    return 0;
}

