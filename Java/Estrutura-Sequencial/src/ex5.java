import java.util.Scanner;

public class ex5 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int cod1, cod2, quant1, quant2;
        double valor1, valor2, total1, total2, total;

        System.out.println("Insira o codigo do primeiro produto, a quantidade e o valor. ");

        cod1 = sc.nextInt();
        quant1 = sc.nextInt();
        valor1 = sc.nextDouble();
        total1 = quant1*valor1;

        System.out.println("Insira o codigo do segundo produto, a quantidade e o valor. ");

        cod2 = sc.nextInt();
        quant2 = sc.nextInt();
        valor2 = sc.nextDouble();
        total2 = quant2*valor2;

        total = total1+total2;

        System.out.println("VALOR A PAGAR: R$ " + total);

        sc.close();
    }
}
