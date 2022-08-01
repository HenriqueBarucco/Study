package application;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

public class Program {
    public static void main(String[] args) {

        String path = "C:\\temp\\in.txt";

        try (BufferedReader br = new BufferedReader(new FileReader(path))) {

            Map<String, Integer> votes = new HashMap<>();
            String line = br.readLine();
            while (line != null) {
                String[] value = line.split(",");
                if (votes.get(value[0]) != null) {
                    int valueAdd = Integer.parseInt(value[1]) + votes.get(value[0]);
                    votes.put(value[0], valueAdd);
                } else {
                    votes.put(value[0], Integer.parseInt(value[1]));
                }
                line = br.readLine();
            }

            for (String name : votes.keySet()) {
                System.out.println(name + ": " + votes.get(name));
            }

        } catch (IOException e) {
            System.out.print("Error: " + e.getMessage());
        }

    }
}
