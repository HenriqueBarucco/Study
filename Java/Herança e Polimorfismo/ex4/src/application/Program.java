package application;

import entities.CompanyPayer;
import entities.IndividualPayer;
import entities.Payer;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of tax payers: ");
        int n = sc.nextInt();

        List<Payer> payers = new ArrayList<>();

        for (int i = 1; i <= n; i++){
            System.out.println("Tax payer #" + i + " data:");
            System.out.print("Individual or company (i/c)? ");
            char esc = sc.next().charAt(0);
            System.out.print("Name: ");
            sc.nextLine();
            String name = sc.nextLine();
            System.out.print("Anual income: ");
            Double anualIncome = sc.nextDouble();

            if (esc == "i".charAt(0)){
                System.out.print("Health expenditures: ");
                Double healthExpenditures = sc.nextDouble();

                payers.add(new IndividualPayer(name, anualIncome, healthExpenditures));
            } else {
                System.out.print("Number of employees: ");
                int numberEmployees = sc.nextInt();

                payers.add(new CompanyPayer(name, anualIncome, numberEmployees));
            }
        }

        System.out.println();

        System.out.println("TAXES PAID:");
        for (Payer p : payers) {
            System.out.println(p);
        }

        System.out.println();
        Double sum = 0.0;
        for (Payer p : payers) {
            sum += p.taxes();
        }

        System.out.println("TOTAL TAXES: $ " + String.format("%.2f", sum));

        sc.close();
    }
}
