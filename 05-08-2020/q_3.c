#include<stdio.h>

int main(void){
    
    int det,somaPar = 0;
    scanf("%d",&det);

    for(int i=0;i<=det;i++){
        i%2==0?somaPar+=i:0;
    };
    
    printf("\n%d\n",somaPar);
    
    return 0;
}