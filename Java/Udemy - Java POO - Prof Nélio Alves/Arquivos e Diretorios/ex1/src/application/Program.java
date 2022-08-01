package application;

import entities.Product;

import java.io.*;
import java.util.Scanner;

public class Program {
    public static void main(String[] args) {

        String filePath = "D:\\Henrique-PC\\OneDrive\\Documentos\\Programação\\Study\\Java\\Arquivos e Diretorios\\ex1\\src\\order.csv";
        String newFilePath = "D:\\Henrique-PC\\OneDrive\\Documentos\\Programação\\Study\\Java\\Arquivos e Diretorios\\ex1\\src\\out\\summary.csv";


        try (BufferedReader br = new BufferedReader(new FileReader(filePath))){
            String line = br.readLine();
            while (line != null) {
                String[] lineProduct = line.split(",");
                Product product = new Product(lineProduct[0], Double.parseDouble(lineProduct[1]), Integer.parseInt(lineProduct[2]));
                try (BufferedWriter bw = new BufferedWriter(new FileWriter(newFilePath, true))){
                    bw.write(String.valueOf(product));
                    bw.newLine();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                line = br.readLine();
            }
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
