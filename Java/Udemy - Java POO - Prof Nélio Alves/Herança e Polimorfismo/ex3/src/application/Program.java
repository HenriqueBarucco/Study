package application;

import entities.Circle;
import entities.Rectangle;
import entities.Shape;
import entities.enums.Color;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of shapes: ");
        int n = sc.nextInt();

        List<Shape> shapes = new ArrayList<>();

        for (int i = 1; i <= n; i++){
            System.out.println("Shape #" + i + " data:");
            System.out.print("Rectangle or Circle (r/c)? ");
            char esc = sc.next().charAt(0);
            System.out.print("Color (BLACK/BLUE/RED): ");
            sc.nextLine();
            Color color = Color.valueOf(sc.nextLine());

            if (esc == "r".charAt(0)) {
                System.out.print("Width: ");
                Double width = sc.nextDouble();
                System.out.print("Height: ");
                Double height = sc.nextDouble();

                shapes.add(new Rectangle(color, width, height));
            } else if (esc == "c".charAt(0)){
                System.out.print("Radius: ");
                Double radius = sc.nextDouble();

                shapes.add(new Circle(color, radius));
            }
        }

        System.out.println();

        System.out.println("SHAPE AREAS:");
        for (Shape s : shapes) {
            System.out.println(String.format("%.2f", s.area()));
        }
    }
}
