import java.util.Scanner;

//Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A
//seguir, calcule e mostre o valor da conta a pagar.
//1 Cachorro Quente R$ 4.00
//2 X-Salada R$ 4.50
//3 X-Bacon R$ 5.00
//4 Torrada simples R$ 2.00
//5 Refrigerante R$ 1.50
public class ex5 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int esc, quant;
        double valor;

        esc = sc.nextInt();
        quant = sc.nextInt();

        if(esc == 1) {
            valor = quant*4.00;
        } else if (esc == 2) {
            valor = quant*4.50;
        } else if (esc == 3) {
            valor = quant*5.00;
        } else if (esc == 4) {
            valor = quant*2.00;
        } else {
            valor = quant*1.50;
        }

        System.out.printf("Total: R$ %.2f", valor);
        sc.close();
    }
}
