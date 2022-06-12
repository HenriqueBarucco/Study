package entities;

public class IndividualPayer extends Payer{
    private Double healthExpenditures;

    public IndividualPayer() {
    }

    public IndividualPayer(String name, Double anualIncome, Double healthExpenditures) {
        super(name, anualIncome);
        this.healthExpenditures = healthExpenditures;
    }

    public Double getHealthExpenditures() {
        return healthExpenditures;
    }

    public void setHealthExpenditures(Double healthExpenditures) {
        this.healthExpenditures = healthExpenditures;
    }

    @Override
    public double taxes(){
        Double sum = null;
        if(anualIncome < 20000) {
            if (healthExpenditures > 0) {
                sum = (anualIncome * 0.15) - (healthExpenditures * 0.5);
            } else {
                sum = anualIncome * 0.15;
            }
        } else if (anualIncome >= 20000) {
            if (healthExpenditures > 0) {
                sum = (anualIncome * 0.25) - (healthExpenditures * 0.5);
            } else {
                sum = anualIncome * 0.25;
            }
        }
        return sum;
    }

    @Override
    public String toString(){
        return name + ": $ " + String.format("%.2f", taxes());
    }
}
