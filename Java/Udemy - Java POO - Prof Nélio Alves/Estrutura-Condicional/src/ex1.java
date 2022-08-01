import java.util.Scanner;

//Fazer um programa para ler um número inteiro, e depois dizer se este número é negativo ou não.
public class ex1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num;

        num = sc.nextInt();

        if(num >= 0){
            System.out.printf("O numero %d e positivo!", num);
        } else {
            System.out.printf("O numero %d e negativo!", num);
        }

        sc.close();
    }
}
