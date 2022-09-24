#include <stdio.h>

//Leia um nu´mero inteiro de 4 d´ıgitos (de 1000 a 9999) e imprima 1 d´ıgito por linha.
void main()
{
    int n, m, d, c, u;

    scanf("%d", &n);

    m=n/1000;
    c=n/100-10*m;
    d=n/10-100*m-10*c;
    u=n/1-1000*m-100*c-10*d;

    printf("\n%d\n%d\n%d\n%d\n", m, c, d, u);
}