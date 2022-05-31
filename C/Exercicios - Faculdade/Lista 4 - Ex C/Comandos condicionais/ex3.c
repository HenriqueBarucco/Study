#include <stdio.h>

/* Leia um numero real. Se o nu´ mero for positivo imprima a raiz quadrada. Do contra´ rio, imprima o
numero ao quadrado */
void main(){
    double n;

    scanf("%lf", &n);

    if(n > 0){
        printf("%.2lf", sqrt(n));
    } else {
        printf("%.2lf", n*n);
    }
}