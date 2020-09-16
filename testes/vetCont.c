#include<stdio.h>

int main(void) {
    int v[10], aux, aux2, j=9;
    for (int i=0;i<10;i++) {
        v[i]=i+1;
    }
    for (int i=0;i<5;i++, j--) {
        // aux = v[i];
        aux2=v[j];
        v[i]=aux2;
        // v[j]=aux;
        // printf("%d",v[i]);
    }
    for (int i=0;i<10;i++) {
        // printf("%d\t", v[i]);
    }
    return 0;
}