

#include <stdio.h>
int main(){
    //questao 3
    int n;
    scanf("%d", &n);
    (n % 3 == 1 && n % 5 == 0) ? printf("1") : printf("0");
}