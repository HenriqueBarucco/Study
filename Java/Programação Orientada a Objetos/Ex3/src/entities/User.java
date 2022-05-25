package entities;

public class User {
    public String name;
    public double nota1;
    public double nota2;
    public double nota3;

    public double notaTotal(){
        return nota1+nota2+nota3;
    }

    public String status(){
        if(notaTotal() >= 60){
            return "PASS";
        } else {
            double missing = 60-notaTotal();
            return "FAILED\nMISSING " + String.format("%.2f", missing) + " POINTS";
        }
    }
}
