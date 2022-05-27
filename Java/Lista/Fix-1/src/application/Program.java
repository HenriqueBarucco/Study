package application;

import entities.Employee;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("How many employees will be registered? ");
        int employeesRegistered = sc.nextInt();
        sc.nextLine();

        List<Employee> employee = new ArrayList<>();

        for(int i = 0; i < employeesRegistered; i++){
            System.out.println("Employee #" + (i+1) + ":");
            System.out.print("Id: ");
            int id = sc.nextInt();
            sc.nextLine();
            System.out.print("Name: ");
            String name = sc.nextLine();
            System.out.print("Salary: ");
            double salary = sc.nextDouble();
            sc.nextLine();
            System.out.println();

            employee.add(new Employee(id, name, salary));
        }

        System.out.print("Enter the employee id that will have salary increase: ");
        int employeeId = sc.nextInt();
        sc.nextLine();

        Employee emp = employee.stream().filter(x -> x.getId() == employeeId).findFirst().orElse(null);

        if(emp != null){
            System.out.print("Enter the percentage: ");
            double percentage = sc.nextDouble();
            emp.increaseSalary(percentage);
        } else {
            System.out.println("This id does not exist!");
        }

        System.out.println();
        System.out.println("List of employees:");
        for (Employee x : employee) {
            System.out.println(x.toString());
        }
    }
}
