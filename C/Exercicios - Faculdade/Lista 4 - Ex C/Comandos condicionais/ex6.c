#include <stdio.h>

/* Escreva um programa que, dados dois nu´ meros inteiros, mostre na tela o maior deles, 
assim como a diferenc¸a existente entre ambos. */
void main(){
    int n, m;

    scanf("%d%d", &n, &m);
    if(n > m){
        printf("%d maior que %d\n", n, m);
        printf("Diferenca = %d", n-m);
    } else {
        printf("%d maior que %d\n", m, n);
        printf("Diferenca = %d", m-n);
    }
}