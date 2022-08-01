import java.util.Scanner;

//Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode
//começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
public class ex4 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int hrIni, hrFin, hrTot;

        hrIni = sc.nextInt();
        hrFin = sc.nextInt();

        if(hrIni < hrFin){
            hrTot = hrFin-hrIni;
        } else {
            hrTot = (24-hrIni)+hrFin;
        }

        System.out.printf("O JOGO DUROU %d HORA(S)", hrTot);

        sc.close();
    }
}
