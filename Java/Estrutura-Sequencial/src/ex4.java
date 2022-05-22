import java.util.Scanner;

public class ex4 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int number, hrWork;
        double hrValue, total;

        number = sc.nextInt();
        hrWork = sc.nextInt();
        hrValue = sc.nextDouble();

        total = hrWork*hrValue;

        System.out.println("NUMBER = " + number);
        System.out.printf("SALARY = U$ %.2f ", total);

        sc.close();
    }
}
