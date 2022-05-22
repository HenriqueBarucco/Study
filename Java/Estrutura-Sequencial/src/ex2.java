import java.util.Scanner;

//Faça um programa para ler o valor do raio de um círculo, e depois mostrar o valor da área deste círculo com quatro
//casas decimais conforme exemplos.
//Fórmula da área: area = π . raio2
//Considere o valor de π = 3.14159
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
