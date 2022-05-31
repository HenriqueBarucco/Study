#include <stdio.h>

// Fac¸a um programa que receba dois nu´meros e mostre qual deles e´ o maior.
void main(){
    double n, m;

    scanf("%lf%lf", &n, &m);
    if(n > m){
        printf("maior = %.2lf", n);
    } else {
        printf("maior = %.2lf", m);
    }
}