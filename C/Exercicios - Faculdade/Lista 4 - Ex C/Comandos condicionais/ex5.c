#include <stdio.h>

/* Fac¸a um programa que receba um nu´mero inteiro e verifique se este nu´mero e´
´ımpar. */
void main(){
    int n;

    scanf("%d", &n);

    if(n%2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }
}