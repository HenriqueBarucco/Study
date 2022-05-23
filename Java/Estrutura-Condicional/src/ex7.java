import java.util.Scanner;

//Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
//de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
//ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
//Se o ponto estiver na origem, escreva a mensagem “Origem”.
//Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a
//situação
public class ex7 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        double x, y;

        x = sc.nextDouble();
        y = sc.nextDouble();

        if(x > 0 && y > 0){
            //Q1
            System.out.println("Q1");
        } else if (x == 0) {
            System.out.println("Eixo X");
        } else if (y == 0) {
            System.out.println("Eixo Y");
        } else if (x > 0 && y < 0) {
            //Q4
            System.out.println("Q4");
        } else if (x < 0 && y > 0) {
            //Q2
            System.out.println("Q2");
        } else if (x < 0 && y < 0) {
            //Q3
            System.out.println("Q3");
        } else {
            // Origem
            System.out.println("Origem");
        }

        sc.close();
    }
}
