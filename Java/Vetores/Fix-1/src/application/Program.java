package application;

import entities.Room;

import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("How many rooms will be ranted? ");
        int ratedRooms = sc.nextInt();
        sc.nextLine();

        Room[] vect = new Room[10];

        for(int i = 0; i<ratedRooms; i++){
            System.out.println("Rent #" + (i+1));
            System.out.print("Name: ");
            String name = sc.nextLine();
            System.out.print("Email: ");
            String email = sc.nextLine();
            System.out.print("Room: ");
            int room = sc.nextInt();
            sc.nextLine();

            vect[room] = new Room(name, email, room);
        }

        System.out.println("Busy rooms:");
        for (Room room : vect) {
            if (room != null) {
                System.out.println(room);
            }
        }

        sc.close();
    }
}
