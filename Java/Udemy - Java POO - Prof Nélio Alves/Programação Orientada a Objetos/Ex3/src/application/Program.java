package application;

import entities.User;

import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        User user = new User();

        System.out.print("Aluno: ");
        user.name = sc.nextLine();
        System.out.print("Primeira nota: ");
        user.nota1 = sc.nextDouble();
        System.out.print("Segunda nota: ");
        user.nota2 = sc.nextDouble();
        System.out.print("Terceira nota: ");
        user.nota3 = sc.nextDouble();
        System.out.printf("%n");

        System.out.println("FINAL GRADE = " + user.notaTotal());
        System.out.print(user.status());

        sc.close();
    }
}
