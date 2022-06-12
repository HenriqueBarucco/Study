package entities;

public class CompanyPayer extends Payer{
    private Integer employees;

    public CompanyPayer() {
    }

    public CompanyPayer(String name, Double anualIncome, Integer employees) {
        super(name, anualIncome);
        this.employees = employees;
    }

    public Integer getEmployees() {
        return employees;
    }

    public void setEmployees(Integer employees) {
        this.employees = employees;
    }

    @Override
    public double taxes(){
        Double sum = null;
        if (employees < 10){
            sum = anualIncome * 0.16;
        } else if (employees >= 10) {
            sum = anualIncome * 0.14;
        }
        return sum;
    }

    @Override
    public String toString(){
        return name + ": $ " + String.format("%.2f", taxes());
    }
}
