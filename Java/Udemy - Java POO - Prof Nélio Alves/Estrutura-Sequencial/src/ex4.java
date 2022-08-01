import java.util.Scanner;

//Fazer um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por
//hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas
//decimais
public class ex4 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int number, hrWork;
        double hrValue, total;

        number = sc.nextInt();
        hrWork = sc.nextInt();
        hrValue = sc.nextDouble();

        total = hrWork*hrValue;

        System.out.println("NUMBER = " + number);
        System.out.printf("SALARY = U$ %.2f ", total);

        sc.close();
    }
}
