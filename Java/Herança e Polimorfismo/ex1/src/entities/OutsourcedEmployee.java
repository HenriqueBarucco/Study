package entities;

public class OutsourcedEmployee extends Employee{
    private double additionalCharge;

    public OutsourcedEmployee(String name, Integer hours, double valuePerHour) {
        super(name, hours, valuePerHour);
    }

    public OutsourcedEmployee(String name, Integer hours, double valuePerHour, double additionalCharge) {
        super(name, hours, valuePerHour);
        this.additionalCharge = additionalCharge;
    }

    public double getAdditionalCharge() {
        return additionalCharge;
    }

    public void setAdditionalCharge(double additionalCharge) {
        this.additionalCharge = additionalCharge;
    }

    @Override
    public double payment(){
        return (valuePerHour * hours) + additionalCharge * 1.10;
    }

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();

        sb.append(name + " - $ " + String.format("%.2f", payment()));

        return sb.toString();
    }
}
