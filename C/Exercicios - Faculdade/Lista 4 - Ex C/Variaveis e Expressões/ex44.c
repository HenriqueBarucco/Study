#include <stdio.h>

/* Receba a altura do degrau de uma escada e a altura que o usua´ rio deseja alcanc¸ar
subindo a escada. Calcule e mostre quantos degraus o usua´ rio devera´ subir para atingir
seu objetivo. */
void main()
{
    int dgA, dgB;

    scanf("%d%d", &dgA, &dgB);
    printf("%d", dgB-dgA);
}