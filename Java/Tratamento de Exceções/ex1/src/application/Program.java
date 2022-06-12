package application;

import models.entities.Account;
import models.exceptions.ErrorException;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter account data");
        System.out.print("Number: ");
        int number = sc.nextInt();
        System.out.print("Holder: ");
        sc.nextLine();
        String name = sc.nextLine();
        System.out.print("Initial balance: ");
        Double initialBalance = sc.nextDouble();
        System.out.print("Withdraw limit: ");
        Double withdrawLimit = sc.nextDouble();

        Account account = new Account(number, name, initialBalance, withdrawLimit);

        System.out.println();

        System.out.print("Enter amount for withdraw: ");
        Double amountWithdraw = sc.nextDouble();

        try {
            account.withdraw(amountWithdraw);
            System.out.print("New balance: " + String.format("%.2f", account.getBalance()));
        }
        catch (ErrorException e) {
            System.out.print("Withdraw error: " + e.getMessage());
        }

        sc.close();
    }
}
