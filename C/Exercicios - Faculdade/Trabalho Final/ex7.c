#include <stdio.h>
#include <stdlib.h>

/*Sua vez de usar a criatividade. Faça um contexto de exercício (escrito)
e em seguida um programa em c, que todos os elementos abaixo citados
(a criatividade do tema, e função do programa é com vocês)
Lembre-se: vocês devem montar o exercício e também resolver o
exercício.
O programa precisa ter:
• no mínimo 3 cálculos de porcentagens diferentes.
• as 4 operações matemáticas básicas (+, -, *, / )
• armazene uma string
• Use For, Do While, While, If e else.
• tenha 10 variáveis diferentes (float, int, char)
• Apresente um desenho na tela (conforme exemplo abaixo, o
desenho fica a critério de vocês) */

/*
Programa para agendamento de salão de cabeleleiro, no qual guarda o nome do cliente, o horario marcado e
permite a escolha entre três serviços oferecidos pelo salão (corte, pintura e alisamento), podendo fazer mais de uma coisa
e apresentando metados de pagamentos com descontos e no encerramento do programa é apresentado um desenho.
Desenho de um coração no final do projeto <3
*/

struct user
{
    char name[30];
    int time[2];
    int product[3];
    int used;
};

void main()
{
    int esc,
        paymentOption = 0;

    double 
        totalPrice,
        cashDiscount = 10.0,
        pixDiscount = 15.0,
        cardDiscount = 5.0,
        haircutPrice = 20.0,
        dyehairPrice = 15.0,
        straighhairPrice = 30.0;

    struct user user = {user.product[0] = 0, user.product[1] = 0, user.product[3] = 0, user.used = 0};

    do
    {
        system("@cls||clear");

        printf("|| Salao de Beleza ||\n");
        printf("[1] Cadastrar cliente\n");
        printf("[2] Verificar cliente\n");
        printf("[3] Editar servicos\n");
        printf("[4] Pagamento\n\n");
        printf("[0] Sair\n");

        scanf("%d", &esc);

        if (esc == 1)
        {
            system("@cls||clear");

            printf("Informe o nome do cliente: ");
            scanf("%s", &user.name);
            fseek(stdin, 0, SEEK_END);

            do
            {
                printf("Informe o horario que deseja marcar: ");
                scanf("%d%d", &user.time[0], &user.time[1]);
            } while (user.time[0] > 23 || user.time[1] > 59);

            productAdd(user.product);

            user.used = 1;
        }
        else if (esc == 2)
        {
            if (user.used != 0)
            {
                system("@cls||clear");

                printf("Nome: %s\n", user.name);
                printf("Horario: %02d:%02d\n", user.time[0], user.time[1]);
                printf("Servicos: \n");
                (user.product[0] == 1) ? printf("- Corte\n") : NULL;
                (user.product[1] == 1) ? printf("- Pintura\n") : NULL;
                (user.product[2] == 1) ? printf("- Alisamento\n") : NULL;

                backScreen();
            }
            else
                noUser();
        }

        else if (esc == 3)
        {
            if (user.used != 0)
                productAdd(user.product);
            else
                noUser();
        }

        else if (esc == 4)
        {
            if (user.used != 0)
            {
                system("@cls||clear");

                printf("Escolha a forma de pagamento:\n");
                printf("[1] Dinheiro (%.0lf%% Desconto)\n", cashDiscount);
                printf("[2] PIX (%.0lf%% Desconto)\n", pixDiscount);
                printf("[3] Cartao de credito (%.0lf%% Desconto)\n", cardDiscount);
                printf("\n[0] - Voltar\n");

                scanf("%d", &paymentOption);

                if (paymentOption != 0)
                {
                    totalPrice = 0.0;
                    if (paymentOption == 1)
                        totalPrice = priceCalculator(user.product, haircutPrice, dyehairPrice, straighhairPrice, cashDiscount);
                    else if (paymentOption == 2)
                        totalPrice = priceCalculator(user.product, haircutPrice, dyehairPrice, straighhairPrice, pixDiscount);
                    else if (paymentOption == 3)
                        totalPrice = priceCalculator(user.product, haircutPrice, dyehairPrice, straighhairPrice, cardDiscount);

                    system("@cls||clear");
                    printf("Valor total: %.2lf", totalPrice);

                    backScreen();
                }
            }
            else
                noUser();
        }

    } while (esc != 0);

    system("@cls||clear");
    draw();
    backScreen();
}

void draw()
{
    int i, j;

    printf("\n");
    for (i = 8 / 2; i <= 8; i += 2)
    {
        for (j = 1; j < 8 - i; j += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= 8 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 8; i >= 1; i--)
    {
        for (j = i; j < 8; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

priceCalculator(int product[3], double haircutPrice, double dyehairPrice, double straighhairPrice, double discount)
{
    double totalPrice;

    totalPrice += (product[0] * haircutPrice) * (1.0 - (discount / 100.00));
    totalPrice += (product[1] * dyehairPrice) * (1.0 - (discount / 100.00));
    totalPrice += (product[2] * straighhairPrice) * (1.0 - (discount / 100.00));

    return totalPrice;
}

void backScreen()
{
    int back;

    do
    {
        printf("\n[0] - Voltar\n");
        scanf("%d", &back);
    } while (back != 0);
}

int productAdd(int product[3])
{
    int add;

    while (add != 0)
    {
        system("@cls||clear");
        printf("Escolha o que fazer no salao: \n");
        (product[0] == 1) ? printf("[1] Corte (ADICIONADO)\n") : printf("[1] Corte (NAO ADICIONADO)\n");
        (product[1] == 1) ? printf("[2] Pintura (ADICIONADO)\n") : printf("[2] Pintura (NAO ADICIONADO)\n");
        (product[2] == 1) ? printf("[3] Alisamento (ADICIONADO)\n\n") : printf("[3] Alisamento (NAO ADICIONADO)\n\n");
        printf("[0] Continuar\n");

        scanf("%d", &add);

        if (add == 1)
            if (product[0] == 1)
                product[0] = 0;
            else
                product[0] = 1;

        else if (add == 2)
            if (product[1] == 1)
                product[1] = 0;
            else
                product[1] = 1;

        else if (add == 3)
            if (product[2] == 1)
                product[2] = 0;
            else
                product[2] = 1;
    }
    return product[3];
}

void noUser()
{
    system("@cls||clear");
    printf("Nenhum cliente foi cadastrado!");

    int back;

    do
    {
        printf("\n[0] - Voltar\n");
        scanf("%d", &back);
    } while (back != 0);
}