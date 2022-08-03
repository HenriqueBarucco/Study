public class Main {
    public static void main(String[] args) {
        int i = 0;
        int j = 0;
        int temp1 = 0;
        int temp2 = 0;
        int res = 0;

        while (i <= 9999) {
            j = i;
            while (j <= 9999) {
                String temp = String.valueOf(i * j);
                String tempInverso = reverse(temp);

                if (temp.equals(tempInverso)) {
                    int polTemp = Integer.parseInt(temp);
                    if (polTemp > res) {
                        res = polTemp;
                        temp1 = i;
                        temp2 = j;
                    }
                }
                j++;
            }
            i++;
        }
        System.out.printf("%d x %d = %d", temp1, temp2, res);
    }

    public static String reverse(String input){
        char[] in = input.toCharArray();
        int begin=0;
        int end=in.length-1;
        char temp;
        while(end>begin){
            temp = in[begin];
            in[begin]=in[end];
            in[end] = temp;
            end--;
            begin++;
        }
        return new String(in);
    }
}