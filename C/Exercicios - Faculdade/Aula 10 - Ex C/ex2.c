#include <stdio.h>

void main() {
    int
        tab;
        
    printf("Informe a tabuada desejada: ");
    scanf("%d", &tab);
    
    //forTab(tab);
    //whileTab(tab);
    doWhileTab(tab);
}

int forTab(int var){
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", var, i, var*i);
    }
    
    printf("\n\n");
    
    for(int i = 10; i >= 0; i--){
        printf("%d x %d = %d\n", var, i, var*i);
    }
    
    return 0;
}

int whileTab(int var){
    int i = 0;
    
    while(i <= 10){
        printf("%d x %d = %d\n", var, i, var*i);
        i++;
    }
    
    return 0;
}

int doWhileTab(int var){
    int
        i = 0;
    do{
        printf("%d x %d = %d\n", var, i, var*i);
        i++;
    } while (i <= 10);
    
    return 0;
}