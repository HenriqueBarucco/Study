#include <stdio.h>
#include <math.h>

/* Leia um nu´ mero fornecido pelo usua´ rio. Se esse nu´ mero for positivo, calcule a raiz quadrada do
nu´mero. Se o nu´mero for negativo, mostre uma mensagem dizendo que o nu´mero e´ inva´lido. */
void main(){
    double n;

    scanf("%lf", &n);

    if(n > 0){
        printf("%.2lf", sqrt(n));
    } else {
        printf("Numero invalido!");
    }
}