#include <stdio.h>

int main(){

    int val[4], maior;
    
    for (int i = 0; i < 4; i++){
        scanf("%d", &val[i]);
        if (i == 0){
            maior = val[i];
        }
        else{
            if (val[i] > maior){
                maior = val[i];
            }
        }
    }
    printf("\n%d\n", maior);
    return 0;
}