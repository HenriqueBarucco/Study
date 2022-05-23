import java.util.Scanner;

//Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos
//seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em
//nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.
public class ex6 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        double num;

        num = sc.nextDouble();

        if(num > 0) {
            if(num <= 25){
                System.out.println("Intervalo [0,25]");
            } else if (num <= 50) {
                System.out.println("Intervalo [25,50]");
            } else if (num <= 75) {
                System.out.println("Intervalo [50,75]");
            } else if (num <= 100) {
                System.out.println("Intervalo [75,100]");
            } else {
                System.out.println("Fora de intervalo");
            }
        } else {
            System.out.println("Fora de intervalo");
        }

        sc.close();
    }
}
