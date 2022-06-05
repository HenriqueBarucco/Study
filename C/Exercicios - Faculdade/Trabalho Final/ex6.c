#include <stdio.h> // Importação da bilbioteca stdio.h da linguagem C.

/* Suponha um vetor N com 15 valores e outro vetor M com 15 elementos.
Faça um programa que calcule o produto escalar X de A por B. (Isto é, X
= A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).
Comente linha a linha o código. */

void main() // Função main como tipo "void", visto que não será retornado nada.
{
    int N[15], // Inicialização da variavel inteira N como um vetor de 15 posições.
        M[15], // Inicialização da variavel inteira M como um vetor de 15 posições.
        X = 0; // Inicialização da variavel inteira X atribuindo um valor inicial de 0.

    printf("Insira os valores do vetor N: "); // Print de mensagem informando o usuario o que fazer.
    for (int i = 0; i < 15; i++) // Repetição de 15 vezes, visto que é o tamanho do nosso vetor.
        scanf("%d", &N[i]); // Scanf colocando o valor inteiro digitado no nosso vetor N. (Conforme o numero de repetição).

    printf("Insira os valores do vetor M: "); // Print de mensagem informando o usuario o que fazer.
    for (int i = 0; i < 15; i++) // Repetição de 15 vezes, visto que é o tamanho do nosso vetor.
        scanf("%d", &M[i]); // Scanf colocando o valor inteiro digitado no nosso vetor M. (Conforme o numero de repetição).

    for (int i = 0; i < 15; i++) // Repetição de 15 vezes, visto que é o tamanho dos nossos vetores.
        X += N[i]*M[i]; // Adicionando o valor da multiplicação de mesma posição de N e M na variavel X.

    printf("Produto escalar X: %d", X); // Print de mensagem informando o valor da variavel inteira X.
}