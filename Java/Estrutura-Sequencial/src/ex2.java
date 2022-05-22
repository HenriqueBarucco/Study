import java.util.Scanner;

public class ex2 {
    public static void main(String[] args) {
        double r, a;
        double pi = 3.14159;

        Scanner sc = new Scanner(System.in);
        r = sc.nextDouble();
        a = pi*r*r;

        System.out.println("A=" + a);

        sc.close();
    }
}
