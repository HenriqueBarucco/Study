package util;

public class CurrencyConverter {
    public static double dollarToReais(double dollarPrice, double dollarAmount){
        return dollarAmount*dollarPrice*1.06;
    }
}
