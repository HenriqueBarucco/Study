package application;

import entities.Employee;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter full file path: ");
        String path = sc.nextLine();

        System.out.print("Enter salary: ");
        Double salary = sc.nextDouble();

        List<Employee> employees = new ArrayList<>();

        try (BufferedReader br = new BufferedReader(new FileReader(path))) {
            String line = br.readLine();
            while (line != null) {
                String[] value = line.split(",");
                employees.add(new Employee(value[0], value[1], Double.parseDouble(value[2])));
                line = br.readLine();
            }
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }

        System.out.println("Email of people whose salary is more than " + String.format("%.2f", salary));

        List<String> emailsFiltered = employees.stream().filter(x -> x.getSalary() > salary).map(x -> x.getEmail()).collect(Collectors.toList());
        emailsFiltered.stream().sorted().forEach(System.out::println);

        char startsWith = 'M';
        double sumSalary = employees.stream().filter(x -> x.getName().charAt(0) == startsWith).map(x -> x.getSalary()).reduce(0.0, (x, y) -> x + y);
        System.out.println("Sum of salary of people whose name starts with '" + startsWith + "': " + String.format("%.2f", sumSalary));
    }
}
