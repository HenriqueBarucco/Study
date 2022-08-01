import java.util.Scanner;

//Fazer um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e
//mostre:
//a) a área do triângulo retângulo que tem A por base e C por altura.
//b) a área do círculo de raio C. (pi = 3.14159)
//c) a área do trapézio que tem A e B por bases e C por altura.
//d) a área do quadrado que tem lado B.
//e) a área do retângulo que tem lados A e B
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
