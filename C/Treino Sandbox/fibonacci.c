#include <stdio.h>

void main()
{
    long
        n1 = 0,
        n2 = 1,
        n3;

    for(int i = 0; i < 25; i++){
        n3 = n2;
        n2 = n1+n2;
        n1 = n3;

        printf("%ld\n", n2);
    }
}
