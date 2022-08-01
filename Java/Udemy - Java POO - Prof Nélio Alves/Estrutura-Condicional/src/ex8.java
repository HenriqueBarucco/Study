import java.util.Scanner;

public class ex8 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        double valor = sc.nextDouble();
        double juros;

        if(valor <= 2000.00){
            System.out.println("Isento");
        } else if (valor < 3000.00 ) {
            juros = (valor-2000.00)*0.08;
            System.out.printf("R$ %.2f", juros);
        } else if (valor < 4500.00) {
            juros = (valor-3000.00)*0.18+1000*0.08;
            System.out.printf("R$ %.2f", juros);
        } else {
            juros = (valor-4500.00)*0.28+1500*0.18+1000*0.08;
            System.out.printf("R$ %.2f", juros);
        }

        sc.close();
    }
}