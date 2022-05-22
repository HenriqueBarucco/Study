import java.util.Scanner;

public class ex6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double A, B, C;
        double tri, cir, tra, qua, ret;
        double pi = 3.14159;

        A = sc.nextDouble();
        B = sc.nextDouble();
        C = sc.nextDouble();

        tri = (A*C)/2;
        cir = pi*C*C;
        tra = ((A+B)*C)/2;
        qua = B*B;
        ret = A*B;

        System.out.printf("TRIANGULO: %.1f\n", tri);
        System.out.printf("CIRCULO: %.1f\n", cir);
        System.out.println("TRAPEZIO: " + tra);
        System.out.println("QUADRADO: " + qua);
        System.out.println("RETANGULO: " + ret);

        sc.close();
    }
}
