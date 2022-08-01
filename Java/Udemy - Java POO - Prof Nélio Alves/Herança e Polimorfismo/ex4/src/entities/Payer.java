package entities;

public abstract class Payer {
    protected String name;
    protected Double anualIncome;

    public Payer() {
    }

    public Payer(String name, Double anualIncome) {
        this.name = name;
        this.anualIncome = anualIncome;
    }

    public double taxes(){
        return 0;
    }

    public String toString(){
        return null;
    }
}
