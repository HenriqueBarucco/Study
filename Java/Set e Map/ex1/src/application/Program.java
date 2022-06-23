package application;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("How many students for course A? " );
        int students = sc.nextInt();

        Set<Integer> A = new HashSet<>();

        for (int i = 0; i < students; i++) {
            int student = sc.nextInt();
            A.add(student);
        }

        System.out.print("How many students for course B? " );
        students = sc.nextInt();

        Set<Integer> B = new HashSet<>();

        for (int i = 0; i < students; i++) {
            int student = sc.nextInt();
            B.add(student);
        }

        System.out.print("How many students for course C? " );
        students = sc.nextInt();

        Set<Integer> C = new HashSet<>();

        for (int i = 0; i < students; i++) {
            int student = sc.nextInt();
            C.add(student);
        }

        Set<Integer> total = new HashSet<>();
        total.addAll(A);
        total.addAll(B);
        total.addAll(C);

        System.out.print("Total students: " + total.size());

        sc.close();
    }
}
