public class Main {
    public static void main(String args[])
    {
        int[] eventos = {10, -20, 61, -15};
        getBattery(eventos);
        System.out.println(getBattery(eventos));
    }

    public static int getBattery(int eventos[]) {
        int battery = 50;
        for (int x : eventos) {
            battery+=x;
            if (battery>100) {
                battery = 100;
            }
        }
        return battery;
    }
}
