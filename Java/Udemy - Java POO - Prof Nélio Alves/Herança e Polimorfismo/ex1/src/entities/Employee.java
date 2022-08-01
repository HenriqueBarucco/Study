package entities;

public class Employee {
    protected String name;
    protected Integer hours;
    protected double valuePerHour;

    public Employee() {
    }

    public Employee(String name, Integer hours, double valuePerHour) {
        this.name = name;
        this.hours = hours;
        this.valuePerHour = valuePerHour;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Integer getHours() {
        return hours;
    }

    public void setHours(Integer hours) {
        this.hours = hours;
    }

    public double getValuePerHour() {
        return valuePerHour;
    }

    public void setValuePerHour(double valuePerHour) {
        this.valuePerHour = valuePerHour;
    }

    public double payment(){
        return valuePerHour * hours;
    }

    public String toString(){
        StringBuilder sb = new StringBuilder();

        sb.append(name + " - $ " + String.format("%.2f", payment()));

        return sb.toString();
    }
}
