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
        return (notaTotal() >= 60) ? "PASS" : "FAILED\nMISSING " + String.format("%.2f", 60-notaTotal()) + " POINTS";
    }
}
