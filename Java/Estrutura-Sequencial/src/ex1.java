import java.util.Scanner;

//Faça um programa para ler dois valores inteiros, e depois mostrar na tela a soma desses números com uma
//mensagem explicativa.

public class ex1 {
    public static void main(String[] args) {
        int x, y, z;

        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        y = sc.nextInt();

        z = x+y;

        System.out.println("SOMA: " + z);

        sc.close();
    }
}
