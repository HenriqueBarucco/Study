#include <stdio.h>

void main() {
    int
        num,
        maior,
        menor;
        
    printf("\nInsira um valor: ");
    scanf("%d", &num);
    
    maior = num;
    menor = num;
        
    for(int i = 0; i < 14; i++){
        printf("\nInsira um valor: ");
        scanf("%d", &num);
        
        if(num > maior){
            //Maior
            maior = num;
        }
        if(num < menor){
            //Menor
            menor = num;
        }
    }
    
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);
}