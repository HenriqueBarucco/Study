#include <stdio.h>

/* Leia o sala´ rio de um trabalhador e o valor da prestac¸a˜ o de um empre´ stimo. Se a 
prestac¸a˜ o for maior que 20% do sala´ rio imprima: Em pr´estimo n~ao concedido, caso
contra´ rio imprima: Empr´estimo concedido. */
void main(){
    double sal, pres;

    scanf("%lf%lf", &sal, &pres);

    if(pres > sal*0.2){
        printf("Emprestimo nao concedido!");
    } else {
        printf("Emprestimo concedido!");
    }
}