#include <stdio.h>

/* Fac¸a um programa que leia um nu´mero e, caso ele seja positivo, calcule e mostre:
• O nu´mero digitado ao quadrado
• A raiz quadrada do nu´mero digitado */
void main(){
    double n;

    scanf("%lf", &n);
    
    if(n > 0){
        printf("%.2lf\n", n*n);
        printf("%.2lf\n", sqrt(n));
    }
}