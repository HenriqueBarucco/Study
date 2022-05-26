package application;

import entities.Account;

import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter account number: ");
        int number = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter account holder: ");
        String name = sc.nextLine();
        System.out.print("Is there an initial deposit (y/n)? ");
        char esc = sc.next().charAt(0);

        Account account;

        if(esc == 'y'){
            System.out.print("Enter initial deposit value: ");
            double initialDeposit = sc.nextDouble();
            account = new Account(number, name, initialDeposit);
        } else {
            account = new Account(number, name);
        }

        System.out.println("\nAccount data:");
        System.out.println(account.toString());

        System.out.print("\nEnter a deposit value: ");
        double value = sc.nextDouble();
        account.deposit(value);
        System.out.println("Updated account data:");
        System.out.println(account.toString());

        System.out.print("\nEnter a withdraw value: ");
        value = sc.nextDouble();
        account.withdraw(value);
        System.out.println("Updated account data:");
        System.out.println(account.toString());

        sc.close();
    }
}
